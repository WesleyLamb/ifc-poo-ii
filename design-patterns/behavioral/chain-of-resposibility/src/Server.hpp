#ifndef Server_hpp
#define Server_hpp

#include "Middleware.hpp"
#include "User.hpp"
#include <list>
#include <string>

class Server {
    private:
        Middleware* middleware;
        std::list<User*> users;
    public:
        void setMiddleware(Middleware* aMiddleware);
        bool auth(std::string username, std::string password);
        void registerUser(User* anUser);
};

#endif