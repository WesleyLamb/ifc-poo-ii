#ifndef FormListagemClientes_hpp
#define FormListagemClientes_hpp

#include "FormCadastroCliente.hpp"
#include "../structs/Cliente.hpp"
#include <list>
#include <memory>

class FormListagemClientes: public Form {
    // private:
    //     FormCadastroCliente* formCadastroClientes;
    protected:
        std::list<std::shared_ptr<Cliente>> records;
        std::shared_ptr<Cliente> selectedRecord;
        bool firstRender;
        void refreshRecords();

        // bool showFormCadastroClientes = false;
    public:
        FormListagemClientes();
        void render(bool* open);
};

#endif