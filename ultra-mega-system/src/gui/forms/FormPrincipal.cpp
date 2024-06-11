#include "FormPrincipal.hpp"
#include "FormListagemClientes.hpp"
#include "FormListagemProdutos.hpp"
#include "FormListagemVendas.hpp"
#include "../imgui/imgui.h"

FormPrincipal::FormPrincipal()
{
    this->formListagemClientes = new FormListagemClientes();
    // this->formListagemProdutos = new FormListagemProdutos();
    // this->formListagemVendas = new FormListagemVendas();
}

FormPrincipal::~FormPrincipal()
{
    delete this->formListagemClientes;
}

void FormPrincipal::render(bool* open)
{
    if (ImGui::BeginMainMenuBar()) {
        if (ImGui::BeginMenu("Cadastros")) {
            if (ImGui::MenuItem("Clientes"))
                this->showListagemClientes = true;
            if (ImGui::MenuItem("Produtos"))
                this->showListagemProdutos = true;
            if (ImGui::MenuItem("Vendas"))
                this->showListagemVendas = true;

            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }

    if (this->showListagemClientes) {
        this->formListagemClientes->render(&this->showListagemClientes);
    }

    // if (this->showListagemProdutos) {
    //     this->formListagemProdutos->render(&this->showListagemProdutos);
    // }

    // if (this->showListagemVendas) {
    //     this->formListagemVendas->render(&this->showListagemVendas);
    // }
}