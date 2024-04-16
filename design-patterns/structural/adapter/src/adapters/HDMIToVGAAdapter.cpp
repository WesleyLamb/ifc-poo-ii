#include "HDMIToVGAAdapter.hpp"
#include "../interfaces/VGA.hpp"

HDMIToVGAAdapter::HDMIToVGAAdapter(VGA *device) {
    this.device = device;
}

void HDMIToVGAAdapter::setImage(std::string img)
{
}

void HDMIToVGAAdapter::setSound(std::string snd) {

}
