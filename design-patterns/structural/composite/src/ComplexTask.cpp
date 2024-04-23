#include "Task.hpp"
#include "ComplexTask.hpp"
#include <iostream>

ComplexTask::ComplexTask(std::string aTitulo, std::string aDescricao, std::list<Task> aTasks): Task(aTitulo, aDescricao)
{

}

void ComplexTask::print(std::string preText)
{
    std::cout << preText << "ComplexTask: " << this->titulo << std::endl;
    std::cout << preText << "Description: " << this->descricao << std::endl;

    for (Task const &ts: subTasks) {
        ts.print(preText + "| ");
    }
}