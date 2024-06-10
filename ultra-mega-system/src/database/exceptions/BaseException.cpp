#include "BaseException.hpp"

BaseException::BaseException(std::string aMessage)
{
    this->_message = aMessage;
}

const char *BaseException::what()
{
    return this->_message.c_str();
}
