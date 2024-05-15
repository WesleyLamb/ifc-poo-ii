#include "AuthenticateMiddleware.hpp"
#include "Bank.hpp"
#include "BankUser.hpp"
#include <list>
#include <iostream>
#include <algorithm>

AuthenticateMiddleware::AuthenticateMiddleware(Bank *aBank)
{
    this->bank = aBank;
}

bool AuthenticateMiddleware::check(std::string anUsername, std::string aPassword, float value)
{
    bool authenticated = false;
    // std::li<st<BankUser*>::iterator it;
    for (auto it = this->bank->getUsers().begin(); it != this->bank->getUsers().end(); ++it){
        if ((it->username == anUsername) && (it->password == aPassword)) {
            authenticated == true;
            break;
        }
    }
    if (!authenticated) {
        std::cout << "Verifique o login e a senha." << std::endl;
        return false;
    }

    if (NULL == this->next)
        return true;
    return this->next->check(anUsername, aPassword, value);
}