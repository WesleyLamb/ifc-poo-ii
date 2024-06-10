#ifndef ConnectionInterface_hpp
#define ConnectionInterface_hpp

#include "ResultSetInterface.hpp"

class ConnectionInterface {
    public:
        virtual ResultSetInterface* executeQuery(std::string aQuery) = 0;
};

#endif