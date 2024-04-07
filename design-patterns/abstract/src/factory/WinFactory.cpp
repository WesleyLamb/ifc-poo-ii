#include "WinFactory.hpp"
#include "../components/WinButton.hpp"
#include "../components/WinCheckbox.hpp"

WinFactory::WinFactory(): AbstractFactory() { }

WinFactory::~WinFactory() { }

Button *WinFactory::createButton() const
{
    WinButton* but = new WinButton();
    return but;
}

Checkbox* WinFactory::createCheckbox() const {
    WinCheckbox* chk = new WinCheckbox();
    return chk;
}
