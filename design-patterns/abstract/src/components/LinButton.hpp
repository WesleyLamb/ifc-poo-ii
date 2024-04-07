#ifndef LinButton_hpp
#define LinButton_hpp

#include "Button.hpp"

class LinButton: public Button {
    public:
        LinButton();
        ~LinButton();
        void onClick();
        void draw();
        std::string caption;
};

#endif