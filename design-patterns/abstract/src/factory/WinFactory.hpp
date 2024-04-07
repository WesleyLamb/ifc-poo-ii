#ifndef WinFactory_hpp
#define WinFactory_hpp

#include "AbstractFactory.hpp"

class WinFactory: public AbstractFactory {
    public:
        WinFactory();
        ~WinFactory();
        Button* createButton() const override;
        Checkbox* createCheckbox() const override;
};

#endif