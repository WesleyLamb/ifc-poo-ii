#ifndef Middleware_hpp
#define Middleware_hpp

#include <string>
#include <list>

class Middleware {
    protected:
        Middleware* next;
    public:
        static void link(std::initializer_list<Middleware*> middlewares);
        virtual bool check(std::string anUsername, std::string aPassword) = 0;
        void setNext(Middleware* aNext);

};

#endif