#include <iostream>
#include "sensordata.h"

int main(int argc, char const *argv[]) {
    int int_nb = 42;
    SensorData data1(int_nb);
    std::cout << data1.to_string() << std::endl;
    float real_nb = 3.14159;
    SensorData data2(real_nb);
    std::cout << data2.to_string() << std::endl;
    char character = 'A';
    SensorData data3(character);
    std::cout << data3.to_string() << std::endl;
   return 0;
}
