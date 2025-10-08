#include <iostream>
#include "date.h"

int main() {
    Date day1(7,31);
    Date day2(10,21);
    std::cout << "Before swap: ";
    std::cout << to_string(day1) << " - " << to_string(day2) << std::endl;
    swap(day1, day2);
    std::cout << "After swap: ";
    std::cout << to_string(day1) << " - " << to_string(day2) << std::endl;
    return 0;
}
