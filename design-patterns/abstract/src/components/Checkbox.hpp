#ifndef Checkbox_hpp
#define Checkbox_hpp

#include "Component.hpp"

class Checkbox: public Component {
    public:
        Checkbox();
        ~Checkbox();
        bool checked;
};

#endif