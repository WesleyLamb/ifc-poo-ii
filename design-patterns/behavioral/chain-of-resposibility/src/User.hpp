#ifndef User_hpp
#define User_hpp

#include <string>

class User {
    private:
        std::string username;
        std::string password;
        bool isAdmin;
    public:
        User(std::string anUsername, std::string aPassword, bool anIsAdmin = false);
};

#endif