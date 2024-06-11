#include "DataSet.hpp"

std::string DataSet::getString(std::string aFieldName)
{
    return this->_resultSet->getString(aFieldName);
}

int DataSet::getInt(std::string aFieldName)
{
    return this->_resultSet->getInt(aFieldName);
}

int DataSet::getInt(int anIndex)
{
    return this->_resultSet->getInt(anIndex);
}

void DataSet::populate(ResultSetInterface *res)
{
    delete this->_resultSet;
    this->_resultSet = res;
}

bool DataSet::next()
{
    return this->_resultSet->next();
}

int DataSet::count()
{
    return this->_resultSet->count();
}
