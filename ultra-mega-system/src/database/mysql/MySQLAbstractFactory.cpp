#include "MySQLAbstractFactory.hpp"
#include "MySQLConnection.hpp"

ConnectionInterface *MySQLAbstractFactory::createConnection(ConnectionParams *aConnectionParams)
{
    return new MySQLConnection(aConnectionParams);
}