#include "BankUser.hpp"

BankUser::BankUser(std::string aName, std::string anAccount, std::string aPassword)
{
    this->name = aName;
    this->account = anAccount;
    this->password = aPassword;
}

std::string BankUser::getAccount()
{
    return this->account;
}

std::string BankUser::getName()
{
    return this->name;
}

std::string BankUser::getPassword()
{
    return this->password;
}
