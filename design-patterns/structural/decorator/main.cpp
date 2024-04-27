#include <iostream>

#include "src/Notifier.hpp"
#include "src/SMSDecorator.hpp"

int main() {
    Notifier* notifier = new Notifier();
    notifier->send("Notificação 1");

    notifier = new SMSDecorator(notifier);
    notifier->send("Notificação 2");

    notifier = new SlackDecorator(notifier);
    notifier->send("Notificação 3");

    // notifier = new FacebookDecorator(notifier);
    // notifier->send("Notificação 4");

    delete notifier;

    return 0;
}