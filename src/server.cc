#include <lithium_http_server.hh>

int main()
{
    li::http_api my_api;

    my_api.add_subapi("/public", li::serve_directory("./views/public"));

    my_api.get("/") = [&](li::http_request &request, li::http_response &response)
    {
        response.write_file("./views/index.html");
    };
    li::http_serve(my_api, 80);
}