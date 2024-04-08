#include "DinheiroFactory.hpp"
#include "../components/Dinheiro.hpp"

DinheiroFactory::DinheiroFactory(): AbstractFactory() { }

DinheiroFactory::~DinheiroFactory() { }

FormaPagamento *DinheiroFactory::createFormaPagamento(float aValor) 
{
    Dinheiro *fp = new Dinheiro(aValor);
    return fp;
}