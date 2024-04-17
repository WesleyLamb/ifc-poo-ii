#include "Sistema.hpp"
#include "../classes/LeitorJson.hpp"
#include <string>
#include <iostream>

void Sistema::carregarLeitor(LeitorXML *aLeitor) {
    this->leitor = aLeitor;
}

void Sistema::importar(std::string aXMLPath) {
    std::cout << "Importando arquivo: " << aXMLPath << std::endl;
    this->leitor->importar(aXMLPath);
}
