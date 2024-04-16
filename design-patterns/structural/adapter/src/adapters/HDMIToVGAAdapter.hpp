#ifndef HDMIToVGAAdapter_hpp
#define HDMIToVGAAdapter

#include "../interfaces/HDMI.hpp"
#include "../interfaces/VGA.hpp"
#include <string>

class HDMIToVGAAdapter: public HDMI {
    private:
        VGA* device;
    public:
        HDMIToVGAAdapter(VGA* device);

        void setImage(std::string img);
        void setSound(std::string snd);
};

#endif