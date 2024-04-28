#include "BaseDecorator.hpp"

BaseDecorator::BaseDecorator(Notifier *aNotifier) {
    this->wrapee = aNotifier;
}