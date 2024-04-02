#include "LinFactory.hpp"
#include "LinButton.hpp"

LinButton* LinFactory::createButton() {
    return new LinButton();
}