#ifndef CartaoCreditoFactory_hpp
#define CartaoCreditoFactory_hpp

#include "AbstractFactory.hpp"
#include "../components/CartaoCredito.hpp"
#include "../components/FormaPagamento.hpp"

class CartaoCreditoFactory: public AbstractFactory {
    public:
        CartaoCreditoFactory();
        ~CartaoCreditoFactory();
        FormaPagamento* createFormaPagamento(float aValor);
};

#endif