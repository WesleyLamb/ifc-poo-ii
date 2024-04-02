#ifndef Player_hpp
#define Player_hpp

#include "Entity.hpp"
#include "Point.hpp"

class Player: Entity
{
private:
    std::string name;
    Point point;
public:
    Player(std::string aName, Point aPoint);
    ~Player();
};

#endif