#ifndef IllegalFunctionCallException_hpp
#define IllegalFunctionCallException_hpp

#include "BaseException.hpp"
#include <string>

class IllegalFunctionCallException: public BaseException {
    public:
        IllegalFunctionCallException(std::string aMessage);
};

#endif