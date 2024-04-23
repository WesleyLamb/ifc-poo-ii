#ifndef Ship_hpp
#define Ship_hpp

#include "Transport.hpp"

class Ship: public Transport {
    public:
        Ship();
        ~Ship();
        void delivery() const override;
};

#endif