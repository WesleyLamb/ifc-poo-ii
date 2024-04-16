#include <iostream>

#include "./src/classes/Sistema.hpp"

int main() {
    Sistema* sistema = new Sistema();
    LeitorJson* leitor;

    sistema->carregarLeitor(leitor = new LeitorJson());
    sistema->importar("./json.json");

    // sistema->carregarLeitor(leitor = new LeitorXMLToLeitorJson(new LeitorXML()));
    // sistema->importar("./xml.xml");

    free(leitor);
    free(sistema);
}