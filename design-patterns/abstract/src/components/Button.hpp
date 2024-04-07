#ifndef Button_hpp
#define Button_hpp

#include "Component.hpp"
#include <string>

class Button: public Component {
    public:
        Button();
        ~Button();
        virtual void onClick() = 0;
};

#endif