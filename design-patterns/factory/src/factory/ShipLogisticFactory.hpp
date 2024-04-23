#ifndef ShipLogisticFactory_hpp
#define ShipLogisticFactory_hpp

#include "AbstractFactory.hpp"

class ShipLogisticFactory: public AbstractFactory {
    public:
        ShipLogisticFactory();
        ~ShipLogisticFactory();
        Transport* createTransport() const override;
};

#endif