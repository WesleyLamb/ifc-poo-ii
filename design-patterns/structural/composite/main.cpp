#include <iostream>
#include <list>
#include "src/SimpleTask.hpp"
#include "src/ComplexTask.hpp"

int main() {
    auto task1 = new SimpleTask("Tarefa 3", "Encher o sistema de linguiça");

    auto task2 = new ComplexTask("Tarefa 2", "Fazer os caras abaixo:");
    task2->addSubTask(task1);

    auto task3 = new ComplexTask("Tarefa 1", "Fazer os tchos abaixo:");
    task3->addSubTask(task2);
    task3->print("");

    delete task1;
    delete task2;
    delete task3;

    return 0;
}