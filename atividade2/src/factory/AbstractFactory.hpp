#ifndef AbstractFactory_hpp
#define  AbstractFactory_hpp

#include "../components/FormaPagamento.hpp"

class AbstractFactory {
    protected:
        AbstractFactory();
    public:
        ~AbstractFactory();

        virtual FormaPagamento* createFormaPagamento(float aValor)  = 0;
};

#endif