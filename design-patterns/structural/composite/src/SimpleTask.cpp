#include "SimpleTask.hpp"

#include <iostream>

SimpleTask::SimpleTask(std::string atitulo, std::string aDescricao): Task(atitulo, aDescricao)
{
}

void SimpleTask::print(std::string preText)
{
    std::cout << preText << "SimpleTask: " << this->titulo << std::endl;
    std::cout << preText << "SimpleTask: " << this->descricao << std::endl;
}