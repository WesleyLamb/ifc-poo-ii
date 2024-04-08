#ifndef CartaoDebitoFactory_hpp
#define CartaoDebitoFactory_hpp

#include "AbstractFactory.hpp"
#include "../components/CartaoDebito.hpp"
#include "../components/FormaPagamento.hpp"

class CartaoDebitoFactory: public AbstractFactory {
    public:
        CartaoDebitoFactory();
        ~CartaoDebitoFactory();
        FormaPagamento* createFormaPagamento(float aValor);
};

#endif