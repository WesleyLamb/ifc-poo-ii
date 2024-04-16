#include "LeitorJson.hpp"
#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>


void LeitorJson::importar(std::string aPath) {
    std::ifstream f(aPath);
    nlohmann::json data = nlohmann::json::parse(f);
    std::cout << data << std::endl;
}