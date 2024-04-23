#ifndef SimpleTask_hpp
#define SimpleTask_hpp

#include <string>
#include "Task.hpp"

class SimpleTask: public Task {
    public:
        SimpleTask(std::string aTitulo, std::string aDescricao);
        void print(std::string preText) override;
};

#endif