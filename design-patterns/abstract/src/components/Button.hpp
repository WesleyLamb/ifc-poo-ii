#ifndef Button_hpp
#define Button_hpp

#include "Component.hpp"
#include <string>

class Button: Component {
    public:
        virtual void OnClick() = 0;
};

#endif