#include "Bank.hpp"
#include "BankUser.hpp"
#include <cstdarg>


void Bank::registerUser(BankUser *anUser)
{
    this->users.push_back(anUser);
}

void Bank::link(Middleware *firstMiddleware, Middleware* middlewares...)
{
    this->middleware = firstMiddleware;
    Middleware* previous = firstMiddleware;
    for (const auto p: {middlewares}) {
        previous->setNext(p);
        previous = p;
    }
}

bool Bank::askLoan(std::string username, std::string password, float value)
{
    return this->middleware->check(username, password, value);
}

std::list<BankUser *> Bank::getUsers()
{
    return this->users;
}
