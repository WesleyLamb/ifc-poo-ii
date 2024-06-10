#include "ConnectionParams.hpp"

ConnectionParams::ConnectionParams(Driver aDriver, std::string aServer, int aPort, std::string aDatabase, std::string anUsername, std::string aPassword)
{
    this->_driver = aDriver;
    this->_server = aServer;
    this->_port = aPort;
    this->_database = aDatabase;
    this->_username = anUsername;
    this->_password = aPassword;
}

Driver ConnectionParams::getDriver()
{
    return this->_driver;
}

std::string ConnectionParams::getServer()
{
    return this->_server;
}

int ConnectionParams::getPort()
{
    return this->_port;
}

std::string ConnectionParams::getDatabase()
{
    return this->_database;
}

std::string ConnectionParams::getUsername()
{
    return this->_username;
}

std::string ConnectionParams::getPassword()
{
    return this->_password;
}
