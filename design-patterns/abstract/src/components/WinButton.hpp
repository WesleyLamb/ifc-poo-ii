#ifndef WinButton_hpp
#define WinButton_hpp

#include "Button.hpp"

class WinButton: public Button {
    public:
        WinButton();
        ~WinButton();
        void onClick();
        void draw();
};

#endif