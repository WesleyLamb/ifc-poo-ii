#ifndef MySQLConnection_hpp
#define MySQLConnection_hpp

#include "../interfaces/ConnectionInterface.hpp"
#include "../interfaces/ResultSetInterface.hpp"
#include "../ConnectionParams.hpp"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <string>

class MySQLConnection: public ConnectionInterface {
    protected:
        sql::Driver* _driver;
        sql::Connection* _con;
        // sql::Statement* _stmt;
        // sql::ResultSet* _res;

        std::string createConnectionString(ConnectionParams* aConnectionParams);
    public:
        MySQLConnection(ConnectionParams *aConnectionParams);
        ResultSetInterface* executeQuery(std::string aQuery);
};

#endif