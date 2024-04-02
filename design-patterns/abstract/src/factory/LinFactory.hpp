#ifndef LinFactory_hpp
#define LinFactory_hpp

#include "AbstractFactory.hpp"

class LinFactory: AbstractFactory {
    LinButton* createButton();
};

#endif