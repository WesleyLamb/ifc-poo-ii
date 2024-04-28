#ifndef BaseDecorator_hpp
#define BaseDecorator_hpp

#include "Player.hpp"

class BaseDecorator: public Player {
    protected:
        Player* player;
    public:
        BaseDecorator(Player* aPlayer);
        ~BaseDecorator();
};

#endif