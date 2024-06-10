#ifndef DataSet_hpp
#define DataSet_hpp

#include <string>
#include "interfaces/ResultSetInterface.hpp"

class DataSet {
    protected:
        ResultSetInterface* _resultSet;
    public:
        std::string getString(std::string aFieldName);
        int getInt(std::string aFieldName);
        int getInt(int anIndex);
        void populate(ResultSetInterface* res);
};

#endif