#include "SimpleTask.hpp"

#include <iostream>
#include <string>

SimpleTask::SimpleTask(std::string atitulo, std::string aDescricao): Task(atitulo, aDescricao)
{
}

void SimpleTask::print(std::string preText)
{
    std::cout << preText << "SimpleTask: " << this->titulo << std::endl;
    std::cout << preText << "Description: " << this->descricao << std::endl;
}