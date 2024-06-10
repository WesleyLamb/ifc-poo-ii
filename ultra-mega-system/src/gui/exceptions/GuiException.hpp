#ifndef GuiException_hpp
#define GuiException_hpp

#include "../../exceptions/BaseException.hpp"

class GuiException: public BaseException {
    public:
        GuiException(std::string aMessage);
};

#endif