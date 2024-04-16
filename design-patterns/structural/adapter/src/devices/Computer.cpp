#include "Computer.hpp"
#include "../interfaces/HDMI.hpp"

void Computer::connectPort(HDMI* hdmi) {
    port = hdmi;
}