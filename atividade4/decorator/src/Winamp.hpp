#ifndef Winamp_hpp
#define Winamp_hpp

#include "Player.hpp"

class Winamp {
    private:
        Player* player;
    public:
        void playSong(std::string aFileName);
        void setPlayer(Player* aPlayer);
};

#endif