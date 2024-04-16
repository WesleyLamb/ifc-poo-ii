#ifndef Leitor_hpp
#define Leitor_hpp

#include <string>

class Leitor {
    virtual void importar(std::string aPath) = 0;
};

#endif