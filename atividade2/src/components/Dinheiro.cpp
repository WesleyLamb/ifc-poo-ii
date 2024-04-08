#include "Dinheiro.hpp"
#include <iostream>

Dinheiro::Dinheiro(float aValor): FormaPagamento(aValor) { }

Dinheiro::~Dinheiro() { }

void Dinheiro::processarTransacao()
{
    setValorPago(this->valor);
}

std::string Dinheiro::imprimirComprovante()
{
    return "Comprovante de pagamento em DINHEIRO no valor de " + std::to_string(this->valorPago) + "\n";
}
