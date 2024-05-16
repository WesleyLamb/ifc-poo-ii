#include "AvailableLimitMiddleware.hpp"

AvailableLimitMiddleware::AvailableLimitMiddleware(float anAvailableLimit)
{
    this->availableLimit = anAvailableLimit;
}

bool AvailableLimitMiddleware::check(std::string anAccount, std::string aPassword, float value)
{


    if (NULL == this->next)
        return true;
    return this->next->check(anAccount, aPassword, value);
}