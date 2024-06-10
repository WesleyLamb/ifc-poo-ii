#include "MySQLResultSetAdapter.hpp"

MySQLResultSetAdapter::MySQLResultSetAdapter(sql::ResultSet* res)
{
    res->first();
    this->_mySQLResultSet = res;
}

std::string MySQLResultSetAdapter::getString(std::string aFieldName)
{
    return this->_mySQLResultSet->getString(aFieldName);
}

int MySQLResultSetAdapter::getInt(std::string aFieldName)
{
    return this->_mySQLResultSet->getInt(aFieldName);
}

int MySQLResultSetAdapter::getInt(int anIndex)
{
    return this->_mySQLResultSet->getInt(anIndex);
}

bool MySQLResultSetAdapter::next()
{
    return this->_mySQLResultSet->next();
}
