#include <iostream>
#include "date.h"

int main() {
    Date a_day(5, 26);
    Date another_day(10,31);

    // Using the member function is_before
    if (a_day.isBefore(another_day)) {
        std::cout << to_string(a_day) << " is before " << to_string(another_day) << std::endl;
    } else {
        std::cout << to_string(a_day) << " is not before " << to_string(another_day)  << std::endl;
    }

    // Using the overloaded operator <
    if (a_day < another_day) {
        std::cout << to_string(a_day) << " is before " << to_string(another_day) << std::endl;
    } else {
        std::cout << to_string(a_day) << " is not before " << to_string(another_day)  << std::endl;
    }

    // Using the non human-friendly operator<
    if (a_day.operator<(another_day)) {
        std::cout << to_string(a_day) << " is before " << to_string(another_day) << std::endl;
    } else {
        std::cout << to_string(a_day) << " is not before " << to_string(another_day)  << std::endl;
    }
    return 0;
}
