#ifndef LeitorJsonToLeitorXML_hpp
#define LeitorJsonToLeitorXML_hpp

#include "../classes/LeitorJson.hpp"
#include "../classes/LeitorXML.hpp"

class LeitorJsonToLeitorXML: public LeitorXML {
    private:
        LeitorJson* leitor;
    public:
        LeitorJsonToLeitorXML(LeitorJson* aLeitor);
        void importar(std::string aPath) override;
};

#endif