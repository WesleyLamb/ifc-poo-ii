#include "Engine.hpp"

int main() {
    Engine *engine = new Engine();
    engine->addMob(new Slime());
    engine->addPlayer({new Player('Castor')});
    engine->generateRandomItemsOnTheGround();
    engine->run();

    return 0;
}