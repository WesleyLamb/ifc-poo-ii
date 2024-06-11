#ifndef FormCadastroCliente_hpp
#define FormCadastroCliente_hpp

#include "Form.hpp"
#include "../structs/Cliente.hpp"
#include <memory>

class FormCadastroCliente: public Form {
    public:
        FormCadastroCliente();
        void render(bool* open);

        std::shared_ptr<Cliente> cliente;
};

#endif