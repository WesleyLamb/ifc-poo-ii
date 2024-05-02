#include "Middleware.hpp"

void Middleware::link(Middleware *first, Middleware *middlewares...) {
    


    for (middlewares::iterator it = subTasks.begin(); it != subTasks.end(); ++it) {
        (*it)->print(preText + "| ");
    }
}

void Middleware::setNext(Middleware *aNext)
{
    this->next = aNext;
}
