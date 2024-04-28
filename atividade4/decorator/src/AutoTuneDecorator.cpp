#include "AutoTuneDecorator.hpp"

AutoTuneDecorator::AutoTuneDecorator(Player *aPlayer): BaseDecorator(aPlayer) { }

std::string AutoTuneDecorator::stream(std::string content)
{
    return this->player->stream(content) + " - AutoTunado";
}
