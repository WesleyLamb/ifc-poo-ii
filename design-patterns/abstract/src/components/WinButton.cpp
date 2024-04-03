#include "WinButton.hpp"
#include <iostream>

WinButton::WinButton(): Button() {}

void WinButton::OnClick()
{
    std::cout << "Clique do botão no ruindolos" << std::endl;
}