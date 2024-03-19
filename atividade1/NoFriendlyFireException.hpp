#ifndef NoFriendlyFireException_hpp
#define NoFriendlyFireException_hpp

#include <stdexcept>

class NoFriendlyFireException : public std::runtime_error
{
public:
    NoFriendlyFireException();
};

#endif