#include "TruckLogisticFactory.hpp"

Transport *TruckLogisticFactory::createTransport() const
{
    Truck* truck = new Truck();
    return truck;
}