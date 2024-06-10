#include "IllegalFunctionCallException.hpp"

#include "../../exceptions/BaseException.hpp"

IllegalFunctionCallException::IllegalFunctionCallException(std::string aMessage): BaseException(aMessage) {}