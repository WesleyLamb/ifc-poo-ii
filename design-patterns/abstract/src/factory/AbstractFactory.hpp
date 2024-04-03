#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include "../components/Button.hpp"
#include "../components/Checkbox.hpp"

class AbstractFactory {
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
};

#endif