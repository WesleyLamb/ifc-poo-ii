#include "TV.hpp"
#include <iostream>
#include <string>

void TV::setImage(std::string img) {
    std::cout << "Exibindo imagem: " << img << std::endl;
}

void TV::setSound(std::string snd) {
    std::cout << "Exibindo som: " << snd << std::endl;
}
