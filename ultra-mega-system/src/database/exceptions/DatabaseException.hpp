#ifndef DatabaseException_hpp
#define DatabaseException_hpp

#include "../../exceptions/BaseException.hpp"
#include <string>

class DatabaseException: BaseException {
    public:
        DatabaseException(std::string aMessage);
};

#endif