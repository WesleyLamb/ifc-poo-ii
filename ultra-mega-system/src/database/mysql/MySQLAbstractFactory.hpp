#ifndef MySQLAbstractFactory_hpp
#define MySQLAbstractFactory_hpp

#include "../interfaces/DatabaseFactoryInterface.hpp"

class MySQLAbstractFactory: public DatabaseFactoryInterface {
    public:
        ConnectionInterface* createConnection(ConnectionParams* aConnectionParams);
};

#endif