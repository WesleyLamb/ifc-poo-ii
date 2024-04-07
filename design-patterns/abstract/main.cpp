#include <iostream>

#include "src/factory/LinFactory.hpp"
#include "src/factory/WinFactory.hpp"

int main() {
    AbstractFactory* factory = new LinFactory();
    Button* button = factory->createButton();
    Checkbox* checkbox = factory->createCheckbox();
    button->onClick();
    checkbox->draw();

    delete button;
    delete checkbox;
    delete factory;

    factory = new WinFactory();
    button = factory->createButton();
    checkbox = factory->createCheckbox();
    button->onClick();
    checkbox->draw();

    delete button;
    delete checkbox;
    delete factory;

    return 0;
}