#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include "../components/Transport.hpp"

class AbstractFactory {
    public:
    AbstractFactory();
    ~AbstractFactory();
    virtual Transport* createTransport() const = 0;
};

#endif