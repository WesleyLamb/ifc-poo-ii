#ifndef Player_hpp
#define Player_hpp

#include <string>
#include "Entity.hpp"

class Player: Entity {
private:
    int nextLevelXp;
    int xp;
    int currentLevel;
public:
    Player(std::string aPlayerName);
    void earnXp(int aXp);
    void levelUp();
};

#endif