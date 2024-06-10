#include "DatabaseException.hpp"

DatabaseException::DatabaseException(std::string aMessage)
{
    this->message = aMessage;
}