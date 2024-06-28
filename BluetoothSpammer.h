#ifndef BLUETOOTHSPAMMER_H
#define BLUETOOTHSPAMMER_H

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

class BluetoothSpammer {
public:
    BluetoothSpammer();
    void begin();
    void spam();
    void stop();

private:
    BLEAdvertising *pAdvertising;
    void setupBLE();
    void generatePacket();
};

BluetoothSpammer::BluetoothSpammer() {
    BLEDevice::init("");
    pAdvertising = BLEDevice::createServer()->getAdvertising();
}

void BluetoothSpammer::begin() {
    setupBLE();
}

void BluetoothSpammer::spam() {
    generatePacket();
    pAdvertising->start();
}

void BluetoothSpammer::stop() {
    pAdvertising->stop();
}

void BluetoothSpammer::setupBLE() {
    // BLE setup code here
}

void BluetoothSpammer::generatePacket() {
    // Packet generation code here
}

#endif // BLUETOOTHSPAMMER_H
