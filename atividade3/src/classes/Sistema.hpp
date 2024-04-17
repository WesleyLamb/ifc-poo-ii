#ifndef Sistema_hpp
#define Sistema_hpp

#include <string>
#include "../classes/LeitorXML.hpp"

class Sistema {
    private:
        LeitorXML* leitor;
    public:
        void carregarLeitor(LeitorXML* aLeitor);
        void importar(std::string aXMLPath);
};

#endif