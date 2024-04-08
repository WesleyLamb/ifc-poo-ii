#ifndef CartaoCredito_hpp
#define CartaoCredito_hpp

#include "FormaPagamento.hpp"

class CartaoCredito: public FormaPagamento {
    public:
        CartaoCredito(float aValor);
        ~CartaoCredito();

        void processarTransacao() override;
        std::string imprimirComprovante() override;
};

#endif