#ifndef DatabaseFactoryInterface_hpp
#define DatabaseFactoryInterface_hpp

#include "ConnectionInterface.hpp"
#include "../ConnectionParams.hpp"

class DatabaseFactoryInterface {
    public:
        virtual ConnectionInterface* createConnection(ConnectionParams* connectionParams) = 0;
};

#endif