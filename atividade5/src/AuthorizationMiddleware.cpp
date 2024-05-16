#include "AuthorizationMiddleware.hpp"

bool AuthorizationMiddleware::check(std::string anAccount, std::string aPassword, float value)
{
    // Aqui vai fazer algo de authorization

    if (NULL == this->next)
        return true;
    return this->next->check(anAccount, aPassword, value);
}