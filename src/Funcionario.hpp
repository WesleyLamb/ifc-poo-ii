#ifndef Funcionario_hpp
#define Funcionario_hpp

class Funcionario {
private:
    char* nome;
    char* matricula;
public:
    Funcionario(char* nomeFuncionario, char* matriculaFuncionario);
    virtual double calcularSalario() = 0;
};

#endif