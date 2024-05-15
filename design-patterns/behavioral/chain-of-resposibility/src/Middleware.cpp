#include "Middleware.hpp"
#include <initializer_list>

void Middleware::link(std::initializer_list<Middleware*> middlewares) {
    auto middleware = middlewares.begin();
    while (NULL != middleware) {


    }
}

void Middleware::setNext(Middleware *aNext)
{
    this->next = aNext;
}
