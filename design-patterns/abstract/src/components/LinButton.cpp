#include "LinButton.hpp"
#include <iostream>

void LinButton::onClick() {
    std::cout << "Clique do botão no linuques" << std::endl;
}

void LinButton::draw()
{
    std::cout << "Desenhando teu botão no linuques" << std::endl;
}

LinButton::LinButton(): Button() {}

LinButton::~LinButton() { }
