#include <iostream>
#include "date.h"

int main() {
    Date day1(3,14);
    std::cout << "day1: " << to_string(day1) << std::endl;
    Date day2 = day1.nextDay();
    std::cout << "day2: " << to_string(day2) << std::endl;
    Date day3 = day2.nextDayByRef();
    std::cout << "day3: " << to_string(day3) << std::endl;
    return 0;
}
