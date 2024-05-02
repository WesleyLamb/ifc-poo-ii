#include "ThrottlingMiddleware.hpp"

ThrottlingMiddleware::ThrottlingMiddleware(int aRequestsPerMin) {
    this->requestsPerMin = aRequestsPerMin;
}

bool ThrottlingMiddleware::check(std::string username, std::string password)
{
    // Finge que aqui foi feito um throttling, porque trabalhar com datas no cpp é um cu
    return this->next->check(username, password);
}
