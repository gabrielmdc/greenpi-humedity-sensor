/*
HumeditySensor.cpp -Definition of HumeditySensor
By Near lg, 14/08/2016
Lanzado bajo licencia BSD---
*/
#include "HumeditySensor.h"

HumeditySensor::HumeditySensor(int dataPin, int powerPin) {
    _dataPin = dataPin;
    _powerPin = powerPin;
    _measure = 0;
}

float HumeditySensor::takeMeasure() {
    _measure = analogRead(_dataPin);
    return _measure;
}

float HumeditySensor::getMeasure() {
    return _measure;
}

void HumeditySensor::on() {
    digitalWrite(_powerPin, HIGH);
}

void HumeditySensor::off() {
    digitalWrite(_powerPin, LOW);
}

int HumeditySensor::getDataPin() {
    return _dataPin;
}

int HumeditySensor::getPowerPin() {
    return _powerPin;
}
