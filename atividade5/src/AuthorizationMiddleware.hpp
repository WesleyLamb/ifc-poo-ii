#ifndef AuthorizationMiddleware_hpp
#define AuthorizationMiddleware_hpp

#include "Middleware.hpp"
#include "Bank.hpp"

class AuthorizationMiddleware: public Middleware {
    public:
        bool check(std::string anAccount, std::string aPassword, float value);
};

#endif