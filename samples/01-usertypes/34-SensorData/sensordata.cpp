
#include "sensordata.h"

SensorValue::SensorValue(int value) : i(value) {}
SensorValue::SensorValue(float value) : r(value) {}
SensorValue::SensorValue(char value) : c(value) {}
SensorData::SensorData(int data) : type_(ValueType::integer), data_(data) {}
SensorData::SensorData(float data) : type_(ValueType::real), data_(data) {}
SensorData::SensorData(char data) : type_(ValueType::character), data_(data) {}

std::string SensorData::to_string() const {
    if (type_ == ValueType::real) {
        return "real: " + std::to_string(data_.r);
    }
    if (type_ == ValueType::integer) {
        return "int: " + std::to_string(data_.i);
    }
    if (type_ == ValueType::character) {
        return "char: " + std::string(1, data_.c);
    }
    return "N/A";
}
