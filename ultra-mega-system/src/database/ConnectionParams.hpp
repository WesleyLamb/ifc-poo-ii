#ifndef ConnectionParams_hpp
#define ConnectionParams_hpp

#include <string>
#include "types/Driver.hpp"
#include "interfaces/ConnectionInterface.hpp"

class ConnectionParams {
    protected:
        Driver _driver;
        std::string _server;
        int _port;
        std::string _database;
        std::string _username;
        std::string _password;
        friend ConnectionInterface;
    public:
        ConnectionParams(Driver aDriver, std::string aServer, int aPort, std::string aDatabase, std::string anUserName, std::string aPassword);

        Driver getDriver();
        std::string getServer();
        int getPort();
        std::string getDatabase();
        std::string getUsername();
        std::string getPassword();
};

#endif