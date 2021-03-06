# balena C++ Hello world

This is a very simple project that is an example of how to run [C++][cpp] code on
a [balena][balena-link] device.

### balena Setup & Deployment

To get this project up and running, you will need to signup for a balena account
[here][signup-page] and set up an application and device. You'll find full
details in our [Getting Started tutorial][gettingStarted-link].

Once you have downloaded this project, you can `balena push` this example using the
[balenaCLI][balena-cli]. This command will package up and push the code to the
balena builders, where it will be compiled and built and deployed to every
device in the application fleet. When it completes, you'll have your C++ code
running on your device and see some logs on your [balenaCloud
dashboard][balena-dashboard].

[cpp]:https://www.cplusplus.com/
[balena-link]:https://balena.io/ 
[go]:https://golang.org/
[signup-page]:https://dashboard.balena-cloud.com/signup
[gettingStarted-link]:https://www.balena.io/docs/learn/getting-started/raspberrypi3/cpp/
[balena-cli]:https://www.balena.io/docs/reference/cli/
[balena-dashboard]:https://dashboard.balena-cloud.com/
