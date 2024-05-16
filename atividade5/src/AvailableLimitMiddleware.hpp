#ifndef AvailableLimitMiddleware_hpp
#define AvailableLimitMiddleware_hpp

#include "Middleware.hpp"

class AvailableLimitMiddleware: public Middleware {
    private:
        float availableLimit;
    public:
        AvailableLimitMiddleware(float anAvailableLimit);
        bool check(std::string anAccount, std::string aPassword, float value);
};

#endif