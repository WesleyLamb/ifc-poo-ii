#ifndef HDMI_hpp
#define HDMI_hpp

#include <string>

class HDMI {
    virtual void setImage(std::string img) = 0;
    virtual void setSound(std::string snd) = 0;
};

#endif