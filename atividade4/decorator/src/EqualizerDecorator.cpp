#include "EqualizerDecorator.hpp"
#include "BaseDecorator.hpp"

EqualizerDecorator::EqualizerDecorator(Player *aPlayer): BaseDecorator(aPlayer) { }

std::string EqualizerDecorator::stream(std::string content)
{
    return this->player->stream(content) + " - equalized";
}