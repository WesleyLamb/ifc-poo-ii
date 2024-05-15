#include "Middleware.hpp"

void Middleware::setNext(Middleware *aNext)
{
    this->next = aNext;
}