#include <iostream>
#include <string>
#include "src/Middleware.hpp"
#include "src/Bank.hpp"
#include "src/AuthenticateMiddleware.hpp"
#include "src/AuthorizationMiddleware.hpp"
#include "src/AvailableLimitMiddleware.hpp"

void init(Bank* aBank) {
    aBank->registerUser(new BankUser("Wesley R. Lamb", "180017", "1234"));
    aBank->registerUser(new BankUser("Mano Valdas", "180028", "3210"));

    aBank->link(
        new AuthenticateMiddleware(aBank),
        new AuthorizationMiddleware(),
        new AvailableLimitMiddleware(5000)
    );
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
        getchar();
        std::cout << "Informe a senha: " << std::endl;
        std::cin >> password;
        getchar();
        std::cout << "Informe o valor para empréstimo: " << std::endl;
        std::cin >> loan;
        getchar();
        success = banco->askLoan(username, password, loan);
    } while(!success);

    delete banco;

    return 0;
}