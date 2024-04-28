#ifndef AmplifierDecorator_hpp
#define AmplifierDecorator_hpp

#include "Player.hpp"
#include "BaseDecorator.hpp"

class AmplifierDecorator: public BaseDecorator {
    public:
        AmplifierDecorator(Player* aPlayer);
        std::string stream(std::string content) override;
};

#endif