#include "WinButton.hpp"
#include <iostream>

WinButton::WinButton(): Button() {}

WinButton::~WinButton() { }

void WinButton::onClick()
{
    std::cout << "Clique do botão no ruindolos" << std::endl;
}

void WinButton::draw()
{
    std::cout << "Desenhando teu botão no winuques" << std::endl;
}
