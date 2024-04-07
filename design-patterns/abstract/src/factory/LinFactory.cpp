#include "LinFactory.hpp"
#include "../components/LinButton.hpp"
#include "../components/LinCheckbox.hpp"
#include <iostream>

LinFactory::LinFactory(): AbstractFactory() { std::cout << "LinFactory::LinFactory()" << std::endl; }

LinFactory::~LinFactory() { std::cout << "LinFactory::~LinFactory()" << std::endl; }

Button *LinFactory::createButton() const
{
    LinButton* but = new LinButton();
    return but;
}

Checkbox* LinFactory::createCheckbox() const {
    LinCheckbox* chk = new LinCheckbox();
    return chk;
}