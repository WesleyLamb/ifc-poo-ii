#include "SMSDecorator.hpp"
#include <iostream>

SMSDecorator::SMSDecorator(Notifier *aNotifier): BaseDecorator(aNotifier) {

}

SMSDecorator::~SMSDecorator() {
    delete this->wrapee;
}

void SMSDecorator::send(std::string aMessage)
{
    this->wrapee->send(aMessage);
    std::cout << "Enviando notificacao SMSDecorator: " << aMessage << std::endl;
}