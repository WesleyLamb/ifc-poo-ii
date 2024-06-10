#ifndef DatabaseException_hpp
#define DatabaseException_hpp

#include <exception>
#include <string>

class DatabaseException: std::exception {
    private:
        std::string message;
    public:
        DatabaseException(std::string aMessage);
};

#endif