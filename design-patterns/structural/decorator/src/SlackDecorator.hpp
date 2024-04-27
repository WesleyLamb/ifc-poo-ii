#ifndef SlackDecorator_hpp
#define SlackDecorator_hpp

#include "Notifier.hpp"
#include "BaseDecorator.hpp"

class SlackDecorator: public BaseDecorator {
    public:
        SlackDecorator(Notifier* aNotifier);
        ~SlackDecorator();
        void send(std::string aMessage);
};

#endif