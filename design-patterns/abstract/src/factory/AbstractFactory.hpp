#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include "../components/Button.hpp"
#include "../components/Checkbox.hpp"

class AbstractFactory {
    public:
    AbstractFactory();
    ~AbstractFactory();
        virtual Button* createButton() const = 0;
        virtual Checkbox* createCheckbox() const = 0;
};

#endif