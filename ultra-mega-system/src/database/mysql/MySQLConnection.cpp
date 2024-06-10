#include "MySQLConnection.hpp"
#include "MySQLResultSetAdapter.hpp"
#include "../ConnectionParams.hpp"
#include <iostream>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

std::string MySQLConnection::createConnectionString(ConnectionParams *aConnectionParams)
{
    return "tcp://" + aConnectionParams->getServer() + ":" + std::to_string(aConnectionParams->getPort());
}

MySQLConnection::MySQLConnection(ConnectionParams *aConnectionParams)
{
    /* Create a connection */
    this->_driver = get_driver_instance();
    this->_con = this->_driver->connect(this->createConnectionString(aConnectionParams), "painel", "yametekudasai");
    /* Connect to the MySQL test database */
    this->_con->setSchema("ums");
    // std::cout << "Conexão estabelecida" << std::endl;
}

ResultSetInterface *MySQLConnection::executeQuery(std::string aQuery)
{
    sql::Statement *stmt;
    sql::ResultSet *res;
    stmt = this->_con->createStatement();
    res = stmt->executeQuery(aQuery);

    return new MySQLResultSetAdapter(res);

    delete stmt;
}