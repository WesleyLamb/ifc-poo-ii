#ifndef FormaPagamento_hpp
#define FormaPagamento_hpp

#include <string>

class FormaPagamento {
    protected:
        float valor = 0;
        float valorPago = 0;
        FormaPagamento(float aValor);
    public:
        virtual void processarTransacao() = 0;
        virtual std::string imprimirComprovante() = 0;
        bool getTransacaoSucedida();
        void setValorPago(float aValorPago);
};

#endif