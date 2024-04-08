#ifndef DinheiroFactory_hpp
#define DinheiroFactory_hpp

#include "AbstractFactory.hpp"
#include "../components/FormaPagamento.hpp"

class DinheiroFactory: public AbstractFactory {
    public:
        DinheiroFactory();
        ~DinheiroFactory();
        FormaPagamento* createFormaPagamento(float aValor)  override;
};

#endif