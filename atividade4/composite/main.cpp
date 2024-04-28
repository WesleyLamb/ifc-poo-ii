#include <iostream>
#include <list>
#include "src/SimpleTask.hpp"
#include "src/ComplexTask.hpp"

int main() {
    auto task1 = new SimpleTask("Tarefa 4", "Encher o sistema de linguiça");

    auto task2 = new ComplexTask("Tarefa 3", "Fazer os caras abaixo:");
    task2->addSubTask(task1);

    auto task3 = new SimpleTask("Tarefa 2", "Tem isso pra fazer");

    auto task4 = new ComplexTask("Tarefa 1", "Fazer os tchos abaixo:");
    task4->addSubTask(task3);
    task4->addSubTask(task2);
    task4->print("");

    delete task1;
    delete task2;
    delete task3;

    return 0;
}