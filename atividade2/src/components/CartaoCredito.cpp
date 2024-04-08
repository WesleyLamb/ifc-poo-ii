#include "CartaoCredito.hpp"

CartaoCredito::CartaoCredito(float aValor): FormaPagamento(aValor) { }

CartaoCredito::~CartaoCredito() { }

void CartaoCredito::processarTransacao()
{
    setValorPago(this->valor);
}

std::string CartaoCredito::imprimirComprovante()
{
    return "Comprovante de pagamento em CARTÃO DE CRÉDITO no valor de " + std::to_string(this->valorPago) + "\n";
}
