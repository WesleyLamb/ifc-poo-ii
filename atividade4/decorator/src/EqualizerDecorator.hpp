#ifndef EqualizerDecorator_hpp
#define EqualizerDecorator_hpp

#include <string>
#include "BaseDecorator.hpp"
#include "Player.hpp"

class EqualizerDecorator: public BaseDecorator {
    public:
        EqualizerDecorator(Player* aPlayer);
        std::string stream(std::string content) override;
};

#endif