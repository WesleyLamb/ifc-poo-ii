#ifndef AutoTuneDecorator_hpp
#define AutoTuneDecorator_hpp

#include <string>
#include "BaseDecorator.hpp"
#include "Player.hpp"

class AutoTuneDecorator: public BaseDecorator {
    public:
        AutoTuneDecorator(Player* aPlayer);
        std::string stream(std::string content) override;
};

#endif