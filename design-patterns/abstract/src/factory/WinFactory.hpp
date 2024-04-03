#ifndef WinFactory_hpp
#define WinFactory_hpp

#include "AbstractFactory.hpp"

class WinFactory: AbstractFactory {
    Button* createButton();
};

#endif