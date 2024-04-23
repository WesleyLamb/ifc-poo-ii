#ifndef Transport_hpp
#define Transport_hpp

class Transport {
    public:
        Transport();
        ~Transport();
        virtual void delivery() const = 0;
};

#endif