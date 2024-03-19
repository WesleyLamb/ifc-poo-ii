#ifndef Mob_hpp
#define Mob_hpp

#include <string>
#include "Entity.hpp"

class Mob: Entity {
public:
    Mob(std::string aMobName, int aMaxLife, int aDamage, int aArmor);
};

#endif