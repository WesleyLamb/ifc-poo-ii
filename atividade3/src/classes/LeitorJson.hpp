#ifndef LeitorJson_hpp
#define LeitorJson_hpp

#include "../interfaces/Leitor.hpp"
#include <string>

class LeitorJson: public Leitor {
    public:
        void importar(std::string aPath) override;
};

#endif