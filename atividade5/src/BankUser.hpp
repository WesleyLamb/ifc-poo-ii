#ifndef BankUser_hpp
#define BankUser_hpp

#include <string>

class BankUser{
    private:
        std::string username;
        std::string password;
    public:
        BankUser(std::string anUserName, std::string aPassword);
};

#endif