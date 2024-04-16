#ifndef Computer_hpp
#define Computer_hpp

#include "../interfaces/HDMI.hpp"

class Computer {
    private:
        HDMI* port;
    public:
        void connectPort(HDMI* hdmi);
};

#endif