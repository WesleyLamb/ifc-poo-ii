#include "DatabaseManager.hpp"
#include "mysql/MySQLAbstractFactory.hpp"
#include "exceptions/IllegalFunctionCallException.hpp"
#include "models/Clientes.hpp"

DatabaseManager* DatabaseManager::_instance = nullptr;

void DatabaseManager::instantiateModels()
{
    this->clientes = new Clientes(this->_connection);
}

DatabaseManager::DatabaseManager(ConnectionParams *aConnectionParams)
{
    DatabaseFactoryInterface* factory;

    this->_connectionParams = aConnectionParams;
    if (this->_connectionParams->getDriver() == Driver::MYSQL) {
        factory = new MySQLAbstractFactory();
    }

    this->_connection = factory->createConnection(this->_connectionParams);

    this->instantiateModels();
    delete factory;
}

DatabaseManager *DatabaseManager::getInstance(ConnectionParams *aConnectionParams)
{
    if (_instance == nullptr) {
        if (NULL == aConnectionParams) {
            throw new IllegalFunctionCallException("Instância ainda não criada. Utilize getInstance(ConnectionParams*)");
        } else {
            _instance = new DatabaseManager(aConnectionParams);
        }
    }
    return _instance;
}