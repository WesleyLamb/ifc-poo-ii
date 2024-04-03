#include "WinFactory.hpp"
#include "../components/WinButton.hpp"

Button *WinFactory::createButton()
{
    WinButton* but = new WinButton();
    return (Button*) but;
}