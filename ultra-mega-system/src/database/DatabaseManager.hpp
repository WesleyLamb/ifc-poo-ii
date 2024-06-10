#ifndef DatabaseManager_hpp
#define DatabaseManager_hpp

#include "interfaces/DatabaseFactoryInterface.hpp"
#include "interfaces/ConnectionInterface.hpp"
#include "models/Clientes.hpp"

class DatabaseManager {
    private:
        void instantiateModels();
    protected:
        DatabaseManager(ConnectionParams* aConnectionParams);
        static DatabaseManager* _instance;

        ConnectionParams* _connectionParams;
        ConnectionInterface* _connection;
        // DatabaseFactoryInterface* _factory;


    public:
        DatabaseManager(DatabaseManager &other) = delete;
        void operator=(const DatabaseManager &) = delete;

        static DatabaseManager* getInstance(ConnectionParams *aConnectionParams = NULL);

        Clientes* clientes;
};

#endif