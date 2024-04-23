#include "Truck.hpp"
#include <iostream>

Truck::Truck(): Transport() { }

Truck::~Truck() { }

void Truck::delivery() const {
    std::cout << "Delivering with Truck" << std::endl;
}
