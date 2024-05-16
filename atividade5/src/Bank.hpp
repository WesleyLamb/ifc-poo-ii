#ifndef Bank_hpp
#define Bank_hpp
#include "Middleware.hpp"
#include "BankUser.hpp"
#include <list>
#include <string>

class Bank {
    private:
        std::list<BankUser*> users;
        Middleware* middleware;
    public:
        void registerUser(BankUser* anUser);
        void link(Middleware *firstMiddleware, Middleware* middlewares...);
        bool askLoan(std::string username, std::string password, float value);
        std::list<BankUser*> getUsers();
};

#endif