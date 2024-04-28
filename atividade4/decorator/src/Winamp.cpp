#include "Winamp.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>

void Winamp::playSong(std::string aFileName) {
    std::cout << "Tocando " << player->stream(aFileName) << std::endl;
}

void Winamp::setPlayer(Player *aPlayer) {
    this->player = aPlayer;
}
