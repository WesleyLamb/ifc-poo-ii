#ifndef CartaoDebito_hpp
#define CartaoDebito_hpp

#include "FormaPagamento.hpp"

class CartaoDebito: public FormaPagamento {
    public:
        CartaoDebito(float aValor);
        ~CartaoDebito();

        void processarTransacao() override;
        std::string imprimirComprovante() override;
};

#endif