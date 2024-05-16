#ifndef Middleware_hpp
#define Middleware_hpp

#include <string>

class Middleware {
    protected:
        Middleware* next;
    public:
        virtual bool check(std::string anAccount, std::string aPassword, float value) = 0;
        void setNext(Middleware* aNext);
};

#endif