#include "LinFactory.hpp"
#include "LinButton.hpp"

Button* LinFactory::createButton() {
    LinButton* but = new LinButton();
    return (Button*) &but;
}