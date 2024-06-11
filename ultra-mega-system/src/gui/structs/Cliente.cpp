#include "Cliente.hpp"

Cliente::Cliente()
{
}

Cliente::Cliente(int anId, std::string aNome, std::string aData_nascimento, std::string aCpf, std::string aCriado_em, std::string aAtualizado_em)
{
    this->id = anId;
    this->nome = aNome;
    this->data_nascimento = aData_nascimento;
    this->cpf = aCpf;
    this->criado_em = aCriado_em;
    this->atualizado_em = aAtualizado_em;
}