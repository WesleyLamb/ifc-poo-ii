#ifndef ThrottlingMiddleware_hpp
#define ThrottlingMiddleware_hpp

#include "Middleware.hpp"

class ThrottlingMiddleware: public Middleware {
    private:
        int requestsPerMin;


    public:
        ThrottlingMiddleware(int aRequestsPerMin);
        bool check(std::string username, std::string password) override;
};

#endif;