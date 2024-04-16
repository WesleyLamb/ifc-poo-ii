#ifndef TV_hpp
#define TV_hpp

#include "../interfaces/HDMI.hpp"
#include <string>

class TV: public HDMI {
    public:
        void setImage(std::string img) override;
        void setSound(std::string snd) override;
};

#endif