#include "Engine.hpp"
#include "Mob.hpp"
#include "Player.hpp"
#include "Item.hpp"


void Engine::update()
{
    for (Mob m = mobs.begin(); m != mobs.end(); m++) {
        m->update();
    }
    for (Item i = items.begin(); i != items.end(); i++) {
        i->update();
    }
    player->update();
}

void Engine::draw()
{
    for (Mob m = mobs.begin(); m != mobs.end(); m++) {
        m->draw();
    }
    for (Item i = items.begin(); i != items.end(); i++) {
        i->draw();
    }
    player->draw();
}

Engine::Engine()
{

}

Engine::~Engine()
{
    for (Mob m = mobs.begin(); m != mobs.end(); m++) {
        delete m;
    }
    for (Item i = items.begin(); i != items.end(); i++) {
        delete i;
    }
    delete player;
}

void Engine::addMob(Mob aMob)
{
    this->mobs.insert(aMob);
}

void Engine::addPlayer(Player aPlayer)
{
    this->player = aPlayer;
}

void Engine::generateRandomItemsOnTheGround()
{

}

void Engine::run()
{
    while (true) {

    }
}
