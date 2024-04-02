#ifndef Logistic_hpp
#define Logistic_hpp

class Logistic
{
private:
    Logistic(/* args */);
public:
    virtual void doDelivery() = 0;
    ~Logistic();
};

#endif