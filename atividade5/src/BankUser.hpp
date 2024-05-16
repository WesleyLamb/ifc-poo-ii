#ifndef BankUser_hpp
#define BankUser_hpp

#include <string>

class BankUser{
    private:
        std::string name;
        std::string account;
        std::string password;
    public:
        BankUser(std::string aName, std::string anAccount, std::string aPassword);
        std::string getName();
        std::string getAccount();
        std::string getPassword();
};

#endif