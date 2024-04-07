#ifndef LinFactory_hpp
#define LinFactory_hpp

#include "AbstractFactory.hpp"

class LinFactory: public AbstractFactory {
    public:
        LinFactory();
        ~LinFactory();
        Button* createButton() const override;
        Checkbox* createCheckbox() const override;
};

#endif