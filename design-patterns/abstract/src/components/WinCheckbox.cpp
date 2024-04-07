#include "WinCheckbox.hpp"
#include <iostream>

WinCheckbox::WinCheckbox(): Checkbox() { }

WinCheckbox::~WinCheckbox() { }

void WinCheckbox::draw()
{
    std::cout << "Desenhando checkbox no winuques" << std::endl;
}