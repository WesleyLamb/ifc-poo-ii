#include "ReverberDecorator.hpp"

ReverberDecorator::ReverberDecorator(Player *aPlayer): BaseDecorator(aPlayer) { }

std::string ReverberDecorator::stream(std::string content)
{
    return this->player->stream(content) + " - Reverbado";
}
