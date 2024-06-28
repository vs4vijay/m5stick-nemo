#ifndef IRCONTROLLER_H
#define IRCONTROLLER_H

#include <IRremoteESP8266.h>
#include <IRsend.h>

class IRController {
public:
    IRController(int irLedPin);
    void sendIRSignal(const uint16_t rawData[], unsigned int length, int frequency);

private:
    IRsend irsend;
};

IRController::IRController(int irLedPin) : irsend(irLedPin) {
    irsend.begin();
}

void IRController::sendIRSignal(const uint16_t rawData[], unsigned int length, int frequency) {
    irsend.sendRaw(rawData, length, frequency);
}

#endif // IRCONTROLLER_H
