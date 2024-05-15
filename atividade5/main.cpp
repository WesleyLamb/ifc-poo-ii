#include <iostream>
#include <string>
#include "src/Middleware.hpp"
#include "src/Bank.hpp"
#include "src/AuthenticateMiddleware.hpp"
#include "src/AuthorizationMiddleware.hpp"
#include "src/AvailableLimitMiddleware.hpp"

Middleware* middlewares = NULL;
int middlewaresLength = 0;

void init(Bank* aBank) {
    aBank->registerUser(new BankUser("Wesley R. Lamb", "1234"));
    aBank->registerUser(new BankUser("Mano Valdas", "3210"));

    middlewares = malloc(sizeof(Middleware) * 5);
    int i = 0;
    middlewares[i++] = new AuthenticateMiddleware(aBank);
    middlewares[i++] = new AuthorizationMiddleware();
    middlewares[i++] = new AvailableLimitMiddleware(5000);
    middlewaresLength = i;

    aBank->link(middlewares);
}

int main() {
    Bank* banco = new Bank();
    std::string username = "", password = "";
    float loan = 0;
    init(banco);

    bool success = false;
    do {
        std::cout << "Informe o nome de usuário: " << std::endl;
        std::cin >> username;
        std::cout << "Informe a senha: " << std::endl;
        std::cin >> password;
        std::cout << "Informe o valor para empréstimo: " << std::endl;
        std::cin >> value;
        success = banco->askLoan(username, password, value);
    } while(!success);

    delete banco;

    return 0;
}