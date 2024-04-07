#ifndef Component_hpp
#define Component_hpp

#include <string>

class Component {
    public:
        Component();
        ~Component();
        virtual void draw() = 0;
        std::string caption;
};

#endif