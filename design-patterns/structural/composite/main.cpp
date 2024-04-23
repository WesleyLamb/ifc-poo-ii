#include <iostream>
#include "src/SimpleTask.hpp"
#include "src/ComplexTask.hpp"

int main() {
    auto task1 = new SimpleTask("Tarefa 2", "Encher o sistema de linguiça");
    auto task2 = new ComplexTask("Tarefa 1", "Fazer os caras abaixo:", [task1]);

    task2.print("");

    delete task1;
    delete task2;

    return 0;
}