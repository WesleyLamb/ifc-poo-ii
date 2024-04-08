#ifndef Dinheiro_hpp
#define Dinheiro_hpp

#include "FormaPagamento.hpp"
#include <string>


class Dinheiro: public FormaPagamento {
    public:
        Dinheiro(float aValor);
        ~Dinheiro();

        void processarTransacao() override;
        std::string imprimirComprovante() override;
};

#endif