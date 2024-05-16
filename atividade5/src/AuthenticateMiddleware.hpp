#ifndef AuthenticateMiddleware_hpp
#define AuthenticateMiddleware_hpp

#include "Middleware.hpp"
#include "Bank.hpp"

class AuthenticateMiddleware: public Middleware {
    private:
        Bank* bank;
    public:
        AuthenticateMiddleware(Bank* aBank);
        bool check(std::string anAccount, std::string aPassword, float value);
};

#endif