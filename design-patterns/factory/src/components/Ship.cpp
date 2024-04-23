#include "Ship.hpp"

#include <iostream>

Ship::Ship(): Transport() { }

Ship::~Ship() { };

void Ship::delivery() const { std::cout << "Delivering with Ship" << std::endl; }