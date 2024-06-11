#include "FormListagemClientes.hpp"
#include "../imgui/imgui.h"
#include "../../database/DatabaseManager.hpp"
#include "../structs/Cliente.hpp"
#include <list>
#include <string>


void FormListagemClientes::refreshRecords()
{
    DatabaseManager* dbm = DatabaseManager::getInstance();
    dbm->clientes->open("select * from clientes");
    this->records.clear();
    while(dbm->clientes->dataSet->next()) {
        this->records.push_back(std::shared_ptr<Cliente>(new Cliente(
            dbm->clientes->dataSet->getInt("id"), dbm->clientes->dataSet->getString("nome"),
            dbm->clientes->dataSet->getString("data_nascimento"), dbm->clientes->dataSet->getString("cpf"),
            dbm->clientes->dataSet->getString("criado_em"), dbm->clientes->dataSet->getString("atualizado_em")
        )));
    }
}

FormListagemClientes::FormListagemClientes()
{
    // this->formCadastroClientes = new FormCadastroCliente();

    this->firstRender = true;
    this->flags |= ImGuiWindowFlags_NoCollapse;
}

void FormListagemClientes::render(bool *open)
{
    ImGui::Begin("Listagem de clientes", open, this->flags);
    if (ImGui::Button("Atualizar") || this->firstRender) {
        this->refreshRecords();
    }
    ImGui::SameLine();
    if (ImGui::Button("Novo")) {
        this->selectedRecord = std::shared_ptr<Cliente>(new Cliente());
        // this->showFormCadastroClientes = true;
    }

    ImGui::BeginTable("gridListagemClientes", 7);
    int i;
    for (auto const& r : this->records) {
        ImGui::TableNextRow();
        for (i = 0; i < 7; i++) {
            ImGui::TableSetColumnIndex(i);

            switch (i)
            {
            case 0:
                ImGui::Text(std::to_string(r->id).c_str());
                break;
            case 1:
                ImGui::Text(r->nome.c_str());
                break;
            case 2:
                ImGui::Text(r->data_nascimento.c_str());
                break;
            case 3:
                ImGui::Text(r->cpf.c_str());
                break;
            case 4:
                ImGui::Text(r->criado_em.c_str());
                break;
            case 5:
                ImGui::Text(r->atualizado_em.c_str());
                break;
            case 6:
                if (ImGui::Button("Alterar")) {
                    this->selectedRecord = r;
                    // this->showFormCadastroClientes = true;
                }
                break;
            }
        }
    }
    ImGui::EndTable();

    ImGui::End();

    // if (this->showFormCadastroClientes) {
    //     this->formCadastroClientes->cliente = this->selectedRecord;
    //     this->formCadastroClientes->render(&this->showFormCadastroClientes);
    // }

    this->firstRender = false;
}