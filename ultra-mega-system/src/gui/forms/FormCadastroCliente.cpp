#include "FormCadastroCliente.hpp"
#include "../imgui/imgui.h"
#include <string>

FormCadastroCliente::FormCadastroCliente()
{
    this->flags |= ImGuiWindowFlags_NoCollapse;
}

void FormCadastroCliente::render(bool *open)
{
    static char str0[101];
    ImGui::Begin("Cadastro de clientes", open, this->flags);

    ImGui::Text(std::to_string(this->cliente->id).c_str());

    ImGui::InputText("nome", str0, IM_ARRAYSIZE(str0));

    ImGui::End();
}