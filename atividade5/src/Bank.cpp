#include "Bank.hpp"
#include "BankUser.hpp"


void Bank::registerUser(BankUser *anUser)
{
    this->users.push_back(anUser);
}

void Bank::link(Middleware *aMiddleware)
{
    this->middleware = aMiddleware;
}

bool Bank::askLoan(std::string username, std::string password, float value)
{
    return this->middleware->check(username, password, value);
}

std::list<BankUser *> Bank::getUsers()
{
    return this->users;
}
