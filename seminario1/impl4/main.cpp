#include <iostream>

#include "src/Editor.hpp"

int main() {
    Editor* editor = new Editor();
    editor->write("Escrita 1");
    std::cout << editor->getText() << std::endl;
    editor->write("Escrita 2");
    std::cout << editor->getText() << std::endl;
    editor->write("Escrita 3");
    std::cout << editor->getText() << std::endl;
    editor->undo();
    editor->write("Escrita 4");
    std::cout << editor->getText() << std::endl;

    delete editor;

    return 0;
}