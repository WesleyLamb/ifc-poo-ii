#include "Clientes.hpp"
#include "Model.hpp"
#include "../interfaces/ConnectionInterface.hpp"

Clientes::Clientes(ConnectionInterface* aConnection): Model(aConnection) { }

void Clientes::getById(int id)
{
    this->open("select * from clientes where id = " + std::to_string(id));
}
