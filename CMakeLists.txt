cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)

project(my_api)

find_package(CURL REQUIRED)
find_package(Boost REQUIRED context)
find_package(Threads REQUIRED)
find_package(OpenSSL REQUIRED)
 
include_directories(${CURL_INCLUDE_DIRS} ${OPENSSL_INCLUDE_DIR})

set(LIBS ${CURL_LIBRARIES} ${Boost_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT} ${OPENSSL_LIBRARIES})

# Directory where lithium headers are located if not in the default include path.
include_directories(include/)

add_custom_target(symbols_generation COMMAND bin/li_symbol_generator ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(my_api src/server.cc)
add_dependencies(my_api symbols_generation)
target_link_libraries(my_api ${LIBS})