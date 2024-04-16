#ifndef OldMonitor_hpp
#define OldMonitor_hpp

#include "../interfaces/VGA.hpp"
#include <string>

class OldMonitor: public VGA {
    public:
        void setImage(std::string img);
};

#endif