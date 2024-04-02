#ifndef Entity_hpp
#define Entity_hpp

#include "Point.hpp"

class Entity
{
private:

protected:
    Point point;
public:
    Entity(Point aPoint);
    ~Entity();

    virtual void update() = 0;
    virtual void draw() = 0;
};

#endif