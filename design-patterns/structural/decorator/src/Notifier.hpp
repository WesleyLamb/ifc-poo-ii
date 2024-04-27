#ifndef Notifier_hpp
#define Notifier_hpp

#include <string>

class Notifier {
    public:
        virtual void send(std::string aMessage);
};

#endif