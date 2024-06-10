#ifndef BaseException_hpp
#define BaseException_hpp

#include <exception>
#include <string>

class BaseException: public std::exception {
    protected:
        std::string _message;
    public:
        BaseException(std::string aMessage);
        const char* what();
};

#endif