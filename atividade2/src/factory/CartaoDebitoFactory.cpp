#include "CartaoDebitoFactory.hpp"
#include "../components/CartaoDebito.hpp"


CartaoDebitoFactory::CartaoDebitoFactory() { }

CartaoDebitoFactory::~CartaoDebitoFactory() { }

FormaPagamento *CartaoDebitoFactory::createFormaPagamento(float aValor)
{
    CartaoDebito* fp = new CartaoDebito(aValor);
    return fp;
}
