#include "AbstractFactory.hpp"
#include <iostream>

AbstractFactory::AbstractFactory() { std::cout << "AbstractFactory::AbstractFactory()" << std::endl; }

AbstractFactory::~AbstractFactory() { std::cout << "AbstractFactory::~AbstractFactory()" << std::endl; }
