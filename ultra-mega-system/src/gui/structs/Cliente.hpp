#ifndef Cliente_hpp
#define Cliente_hpp
#include <string>

class Cliente {
    public:
        Cliente();
        Cliente(int anId, std::string aNome, std::string aData_nascimento, std::string aCpf, std::string aCriado_em, std::string aAtualizado_em);
        int id;
        std::string nome;
        std::string data_nascimento;
        std::string cpf;
        std::string criado_em;
        std::string atualizado_em;
};

#endif