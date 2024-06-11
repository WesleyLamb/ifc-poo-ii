#ifndef MySQLResultSetAdapter_hpp
#define MySQLResultSetAdapter_hpp

#include "../interfaces/ResultSetInterface.hpp"
#include <cppconn/resultset.h>
#include <string>

class MySQLResultSetAdapter: public ResultSetInterface {
    protected:
        sql::ResultSet* _mySQLResultSet;
    public:
        MySQLResultSetAdapter(sql::ResultSet* res);
        std::string getString(std::string aFieldName);
        int getInt(std::string aFieldName);
        int getInt(int anIndex);
        bool next();
        int count();
};

#endif