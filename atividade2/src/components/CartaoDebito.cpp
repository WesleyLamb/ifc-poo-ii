#include "CartaoDebito.hpp"

CartaoDebito::CartaoDebito(float aValor): FormaPagamento(aValor) { }

CartaoDebito::~CartaoDebito() { }

void CartaoDebito::processarTransacao()
{
    setValorPago(this->valor);
}

std::string CartaoDebito::imprimirComprovante()
{
    return "Comprovante de pagamento em CARTÃO DE DÉBITO no valor de " + std::to_string(this->valorPago) + "\n";
}
