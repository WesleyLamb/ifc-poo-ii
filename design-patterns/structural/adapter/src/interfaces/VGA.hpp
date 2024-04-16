#ifndef VGA_hpp
#define VGA_hpp

#include <string>

class VGA {
    virtual void setImage(std::string img) = 0;
};

#endif