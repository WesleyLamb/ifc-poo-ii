#include <iostream>
#include "src/Winamp.hpp"
#include "src/AmplifierDecorator.hpp"
#include "src/EqualizerDecorator.hpp"
#include "src/ReverberDecorator.hpp"
#include "src/AutoTuneDecorator.hpp"

int main() {
    Winamp* app = new Winamp();

    Player* player = new Player();
    player = new AmplifierDecorator(player);
    player = new EqualizerDecorator(player);
    player = new ReverberDecorator(player);
    player = new AutoTuneDecorator(player);

    app->setPlayer(player);
    app->playSong("./Darude_Sandstorm.mp3");

    delete player;
    delete app;

    return 0;
}