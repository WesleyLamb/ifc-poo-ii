#ifndef Form_hpp
#define Form_hpp

#include "../imgui/imgui.h"

class Form {
    protected:
        ImGuiWindowFlags flags = 0;
    public:
        virtual void render(bool* open) = 0;
};

#endif