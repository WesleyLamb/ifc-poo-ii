#ifndef FormPrincipal_hpp
#define FormPrincipal_hpp

#include "Form.hpp"

class FormPrincipal: public Form {
    private:
        Form* formListagemClientes;
        Form* formListagemProdutos;
        Form* formListagemVendas;
    protected:
        bool showListagemClientes = false;
        bool showListagemProdutos = false;
        bool showListagemVendas = false;
    public:
        FormPrincipal();
        ~FormPrincipal();
        void render(bool* open);
};

#endif