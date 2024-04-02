#ifndef Engine_hpp
#define Engine_hpp

#include <bits/stdc++.h>
#include "Mob.hpp"
#include "Player.hpp"
#include "Item.hpp"

class Engine
{
private:
    std::unordered_set<Mob> mobs;
    std::unordered_set<Item> items;
    Player *player;

    void update();
    void draw();

public:
    Engine(/* args */);
    ~Engine();

    void addMob(Mob aMob);
    void addPlayer(Player aPlayer);
    void generateRandomItemsOnTheGround();
    void run();
};

#endif