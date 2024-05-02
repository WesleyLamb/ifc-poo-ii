#include "User.hpp"

User::User(std::string anUsername, std::string aPassword, bool anIsAdmin = false) {
    this->username = anUsername;
    this->password = aPassword;
    this->isAdmin = anIsAdmin;
}