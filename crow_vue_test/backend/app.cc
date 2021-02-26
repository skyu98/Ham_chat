#include <iostream>
#include "crow_all.h"

using namespace std;

int main(int argc, char* argv[])
{
    crow::SimpleApp app;
	crow::mustache::set_base("./templates/");

    CROW_ROUTE(app, "/")([](){
        //return "Hello world";
        crow::mustache::context ctx;
        return crow::mustache::load_text("index.html");
    });

    app.port(8080).
	//	multithreaded().
		run();
}

