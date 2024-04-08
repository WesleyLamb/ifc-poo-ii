#include "FormaPagamento.hpp"

FormaPagamento::FormaPagamento(float aValor)
{
    this->valor = aValor;
}

bool FormaPagamento::getTransacaoSucedida()
{
    return this->valorPago == this->valor;
}

void FormaPagamento::setValorPago(float aValorPago)
{
    this->valorPago = aValorPago;
}
