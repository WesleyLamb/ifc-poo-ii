#include "Model.hpp"
// #include "../interfaces/StatementInterface.hpp"
#include "../interfaces/ResultSetInterface.hpp"
#include <string>

Model::Model(ConnectionInterface *aConnection)
{
    this->_connection = aConnection;
    this->dataSet = new DataSet();
}

void Model::open(std::string aQuery)
{
    ResultSetInterface* res = this->_connection->executeQuery(aQuery);

    this->dataSet->populate(res);
}