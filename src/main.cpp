#include "crow_all.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/health")([](){
        return "Analytics service is healthy!";
    });

    CROW_ROUTE(app, "/analytics")([](){
        return "Analytics data";
    });

    app.port(8080).multithreaded().run();
}
