#ifndef Component_hpp
#define Component_hpp

#include <string>

class Component {
    public:
        virtual void Draw() = 0;
        std::string Caption;
};

#endif