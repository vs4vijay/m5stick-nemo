#ifndef WIFISPAMMER_H
#define WIFISPAMMER_H

#include <WiFi.h>

class WiFiSpammer {
public:
    WiFiSpammer();
    void begin();
    void spam(const char* ssidList, int spamType);
    void stop();

private:
    void nextChannel();
    void beaconSpamList(const char* list);
    char* generateRandomSSID();
    uint8_t channels[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    uint8_t channelIndex = 0;
    uint8_t wifi_channel = 1;
    bool wpa2 = true;
    uint32_t packetSize = 0;
    uint32_t packetCounter = 0;
    uint32_t packetRateTime = 0;
};

#endif // WIFISPAMMER_H
