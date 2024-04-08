#include <iostream>

#include "src/factory/AbstractFactory.hpp"
#include "src/factory/DinheiroFactory.hpp"
#include "src/factory/CartaoDebitoFactory.hpp"
#include "src/factory/CartaoCreditoFactory.hpp"

int main() {
    float valorVenda = 0;
    std::cout << "Informe o valor da venda: " << std::endl;
    std::cin >> valorVenda;

    int operacao;
    do
    {
        std::cout << "Informe a forma de pagamento: " << std::endl;
        std::cout << "1 - Dinheiro" << std::endl;
        std::cout << "2 - Cartão Débito" << std::endl;
        std::cout << "3 - Cartão Crédito" << std::endl;
        std::cin >> operacao;
        if ((operacao <=0 || operacao >= 4))
            std::cout << "Forma de pagamento inválida!" << std::endl;
    } while (operacao <=0 || operacao >= 4);

    AbstractFactory* factory;
    switch (operacao)
    {
    case 1:
        factory = new DinheiroFactory();
        break;
    case 2:
        factory = new CartaoDebitoFactory();
        break;
    default:
        factory = new CartaoCreditoFactory();
        break;
    }
    FormaPagamento* formaPagamento = factory->createFormaPagamento(valorVenda);
    formaPagamento->processarTransacao();
    if (formaPagamento->getTransacaoSucedida()) {
        std::cout << formaPagamento->imprimirComprovante() << std::endl;
    } else {
        std::cout << "Não foi possível completar a transação" << std::endl;
    }

    delete formaPagamento;
    delete factory;
}