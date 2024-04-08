#include "CartaoCreditoFactory.hpp"
#include "../components/CartaoCredito.hpp"


CartaoCreditoFactory::CartaoCreditoFactory() { }

CartaoCreditoFactory::~CartaoCreditoFactory() { }

FormaPagamento *CartaoCreditoFactory::createFormaPagamento(float aValor)
{
    CartaoCredito* fp = new CartaoCredito(aValor);
    return fp;
}
