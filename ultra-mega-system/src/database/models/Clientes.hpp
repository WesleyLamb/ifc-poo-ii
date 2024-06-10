#ifndef Clientes_hpp
#define Clientes_hpp

#include "Model.hpp"

class Clientes: public Model {
    protected:
        bool updated = false;
    public:
        Clientes(ConnectionInterface* aConnection);
        void getById(int id);
};

#endif