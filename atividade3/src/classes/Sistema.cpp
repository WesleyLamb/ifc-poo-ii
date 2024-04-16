#include "Sistema.hpp"
#include "../classes/LeitorJson.hpp"
#include <string>
#include <iostream>

void Sistema::carregarLeitor(LeitorJson *aLeitor) {
    this->leitor = aLeitor;
}

void Sistema::importar(std::string aJsonPath) {
    std::cout << "Importando arquivo: " << aJsonPath << std::endl;
    this->leitor->importar(aJsonPath);
}
