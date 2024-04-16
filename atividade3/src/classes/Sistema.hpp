#ifndef Sistema_hpp
#define Sistema_hpp

#include <string>
#include "../classes/LeitorJson.hpp"

class Sistema {
    private:
        LeitorJson* leitor;
    public:
        void carregarLeitor(LeitorJson* aLeitor);
        void importar(std::string aJsonPath);
};

#endif