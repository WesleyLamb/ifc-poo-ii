#ifndef TruckLogisticFactory_hpp
#define TruckLogisticFactory_hpp

#include "../components/Truck.hpp"
#include "AbstractFactory.hpp"

class TruckLogisticFactory: public AbstractFactory {
    public:
        Transport* createTransport() const override;
};
#endif