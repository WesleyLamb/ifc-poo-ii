#ifndef BaseDecorator_hpp
#define BaseDecorator_hpp

#include "Notifier.hpp"

class BaseDecorator: public Notifier {
    protected:
        Notifier* wrapee;
    public:
        BaseDecorator(Notifier* aNotifier);
};

#endif