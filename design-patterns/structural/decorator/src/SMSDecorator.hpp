#ifndef SMSDecorator_hpp
#define SMSDecorator_hpp

#include "BaseDecorator.hpp"
#include <string>

class SMSDecorator: public BaseDecorator {
    public:
        SMSDecorator(Notifier* aNotifier);
        ~SMSDecorator();
        void send(std::string aMessage) override;
};

#endif