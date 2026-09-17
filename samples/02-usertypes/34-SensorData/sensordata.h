#ifndef SENSORDATA_H
#define SENSORDATA_H

#include <string>

union SensorValue {
    int i;
    float r;
    char c;
    SensorValue(int value);
    SensorValue(float value);
    SensorValue(char value);
};

enum class ValueType { integer, real, character };

class SensorData {
public:
      SensorData(int data=0);
      SensorData(float data=0.0);
      SensorData(char data='\0');
      std::string to_string() const;
private:
      ValueType type_;
      SensorValue data_;
};

#endif // SENSORDATA_H
