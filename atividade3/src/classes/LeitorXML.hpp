#ifndef LeitorXML_hpp
#define LeitorXML_hpp

#include "../interfaces/Leitor.hpp"
#include <string>

class LeitorXML: public Leitor {
    public:
        void importar(std::string aPath) override;
};

#endif