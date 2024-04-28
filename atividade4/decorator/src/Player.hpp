#ifndef PlayableContent_hpp
#define PlayableContent_hpp

#include <string>

class Player {
    public:
        Player();
        virtual std::string stream(std::string content);
};

#endif