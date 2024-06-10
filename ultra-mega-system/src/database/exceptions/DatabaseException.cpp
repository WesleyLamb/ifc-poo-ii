#include "DatabaseException.hpp"

#include "../../exceptions/BaseException.hpp"

DatabaseException::DatabaseException(std::string aMessage): BaseException(aMessage) { }