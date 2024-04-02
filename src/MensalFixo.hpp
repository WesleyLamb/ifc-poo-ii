#ifndef MensalFixo_hpp
#define MensalFixo_hpp

#include "Funcionario.hpp"

class MensalFixo: public Funcionario {
private:
    double salarioBase;
public:
    MensalFixo (char* nomeFuncionario, char* matriculaFuncionario, double salarioFuncionario);
    double calcularSalario();
};

#endif