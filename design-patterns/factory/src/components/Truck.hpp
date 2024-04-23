#ifndef Truck_hpp
#define Truck_hpp

#include "Transport.hpp"

class Truck: public Transport {
    public:
        Truck();
        ~Truck();
        void delivery() const override;
};

#endif