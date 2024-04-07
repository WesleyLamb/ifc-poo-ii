#include "LinCheckbox.hpp"
#include <iostream>

LinCheckbox::LinCheckbox(): Checkbox() { }

LinCheckbox::~LinCheckbox() { }

void LinCheckbox::draw()
{
    std::cout << "Desenhando checkbox no linuques" << std::endl;
}