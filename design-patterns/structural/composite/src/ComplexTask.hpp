#ifndef ComplexTask_hpp
#define ComplexTask_hpp

#include "Task.hpp"
#include <list>
#include <string>

class ComplexTask: public Task{
    public:
        ComplexTask(std::string aTitulo, std::string aDescricao, std::list<Task> aTasks);
        ~ComplexTask();
        std::list<Task> subTasks;

        void print(std::string preText) override;
};

#endif