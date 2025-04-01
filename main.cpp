#include <iostream>
#include <string>

#include <cpr/cpr.h>
#include <fmt/format.h>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

int main() {
    auto response = cpr::Get(cpr::Url{"https://httpbin.org/ip"});

    if (response.status_code == 200) {
        try {
            auto data = json::parse(response.text);
            fmt::print("origin IP: {}\n", data["origin"].get<std::string>());
        } catch (const json::exception& e) {
            fmt::print(stderr, "JSON parse error: {}\n", e.what());
        }
    } else {
        fmt::print(stderr, "Request failed with code: {}\n", response.status_code);
    }

    return 0;
}