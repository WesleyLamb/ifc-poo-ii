#ifndef ReverberDecorator_hpp
#define ReverberDecorator_hpp

#include "BaseDecorator.hpp"


class ReverberDecorator: public BaseDecorator {
    public:
        ReverberDecorator(Player* aPlayer);
        std::string stream(std::string content) override;
};

#endif