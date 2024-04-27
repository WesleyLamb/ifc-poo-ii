#include "Notifier.hpp"
#include <iostream>

void Notifier::send(std::string aMessage) {
    std::cout << "Enviando notificacao Notifier: " << aMessage << std::endl;
}