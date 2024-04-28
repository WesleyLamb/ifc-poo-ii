#include "BaseDecorator.hpp"

BaseDecorator::BaseDecorator(Player *aPlayer) {
    this->player = aPlayer;
}

BaseDecorator::~BaseDecorator()
{
    delete this->player;
}
