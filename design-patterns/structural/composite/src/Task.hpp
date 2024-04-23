#ifndef Task_hpp
#define Task_hpp

#include <string>
#include <chrono>
#include <ctime>

class Task {
    public:
        Task(std::string aTitulo, std::string aDescricao);
        std::string titulo;
        std::string descricao;

        virtual void print(std::string preText) = 0;
};

#endif