#include "Crow/include/crow.h"

int main() {
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([] {
        return crow::response(200, "api");
    });

    CROW_ROUTE(app, "/ping")
    ([] {
        return crow::response(200, "pong");
    });

    CROW_ROUTE(app, "/compute")
    ([] {
        long long result = 0;
        for (int i = 0; i < 1'600'000; ++i) {
            result += i * i;
        }
        return crow::response(std::to_string(result));
    });

    app
            .concurrency(std::thread::hardware_concurrency())
            .port(8090)
            .multithreaded()
            .run();
}
