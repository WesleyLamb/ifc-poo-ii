#include "LeitorJsonToLeitorXML.hpp"

LeitorJsonToLeitorXML::LeitorJsonToLeitorXML(LeitorJson *aLeitor) {
    this->leitor = aLeitor;
}

void LeitorJsonToLeitorXML::importar(std::string aPath) {
    this->leitor->importar(aPath);
}
