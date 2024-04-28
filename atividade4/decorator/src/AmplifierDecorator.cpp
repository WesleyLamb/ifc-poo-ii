#include "AmplifierDecorator.hpp"
#include "BaseDecorator.hpp"

AmplifierDecorator::AmplifierDecorator(Player *aPlayer): BaseDecorator(aPlayer) { }

std::string AmplifierDecorator::stream(std::string content)
{
    return this->player->stream(content) + " - amplified";
}