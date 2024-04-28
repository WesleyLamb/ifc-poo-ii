#include "Task.hpp"
#include "ComplexTask.hpp"
#include <string>
#include <iostream>

ComplexTask::ComplexTask(std::string aTitulo, std::string aDescricao): Task(aTitulo, aDescricao) {

}

void ComplexTask::print(std::string preText)
{
    std::cout << preText << "ComplexTask: " << this->titulo << std::endl;
    std::cout << preText << "Description: " << this->descricao << std::endl;

    for (std::list<Task*>::iterator it = subTasks.begin(); it != subTasks.end(); ++it) {
        (*it)->print(preText + "| ");
    }
}

void ComplexTask::addSubTask(Task *task)
{
    this->subTasks.push_back(task);
}
