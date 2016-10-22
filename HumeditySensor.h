/*
  HumeditySensor.h - Descripción de la librería
By Near lg, 14/08/2016
Lanzado bajo licencia BSD--- 
*/
#ifndef HumeditySensor_h
#define HumeditySensor_h
#include "Arduino.h"

class HumeditySensor {
    public:
        HumeditySensor(int dataPin, int powerPin);
        float getMeasure();
        int getDataPin();
        int getPowerPin();
        float takeMeasure();
        void on();
        void off();
    private:
        int _dataPin; // Analog pin number
        int _powerPin;
        /*
            _measure >= 1000 -> Sensor is not in the Soil or DISCONNECTED
            _measure < 1000 && _measure >= 600 -> Soil is DRY
            _measure < 600 && _measure >= 370 -> Soil is HUMID
            _measure < 370 -> Sensor in WATER
        */
        float _measure;
};
#endif
