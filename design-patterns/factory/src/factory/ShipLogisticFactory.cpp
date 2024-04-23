#include "ShipLogisticFactory.hpp"
#include "../components/Ship.hpp"

ShipLogisticFactory::ShipLogisticFactory(): AbstractFactory() { }

ShipLogisticFactory::~ShipLogisticFactory() { }

Transport *ShipLogisticFactory::createTransport() const
{
    Ship* ship = new Ship();
    return ship;
}