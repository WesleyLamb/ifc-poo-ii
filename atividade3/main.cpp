#include <iostream>

#include "./src/classes/Sistema.hpp"
#include "./src/adapter/LeitorJsonToLeitorXML.hpp"
#include "./src/classes/LeitorXML.hpp"
#include "./src/classes/LeitorJson.hpp"

int main() {
    Sistema* sistema = new Sistema();
    LeitorXML* leitor;

    sistema->carregarLeitor(leitor = new LeitorXML());
    sistema->importar("./xml.xml");
    free(leitor);

    sistema->carregarLeitor(leitor = new LeitorJsonToLeitorXML(new LeitorJson()));
    sistema->importar("./json.json");
    free(leitor);

    free(sistema);
}