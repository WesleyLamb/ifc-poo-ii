#include "Server.hpp"

void Server::setMiddleware(Middleware *aMiddleware) {
    this->middleware = aMiddleware;
}

bool Server::auth(std::string username, std::string password)
{
    return this->middleware->check(username, password);
}

void Server::registerUser(User *anUser) {
    this->users.push_back(anUser);
}
