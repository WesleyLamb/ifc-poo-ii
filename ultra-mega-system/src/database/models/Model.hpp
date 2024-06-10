#ifndef Model_hpp
#define Model_hpp

#include "../DataSet.hpp"
#include "../interfaces/ConnectionInterface.hpp"
#include <string>

class Model {
    protected:
        ConnectionInterface* _connection;
    public:
        Model(ConnectionInterface* aConnection);
        void open(std::string aQuery);

        DataSet* dataSet;
};

#endif