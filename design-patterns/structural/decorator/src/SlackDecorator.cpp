#include "SlackDecorator.hpp"

#include <iostream>

SlackDecorator::SlackDecorator(Notifier *aNotifier): BaseDecorator(aNotifier) {

}

SlackDecorator::~SlackDecorator() {
    delete this->wrapee;
}

void SlackDecorator::send(std::string aMessage)
{
    this->wrapee->send(aMessage);
    std::cout << "Enviando notificacao SlackDecorator: " << aMessage << std::endl;
}