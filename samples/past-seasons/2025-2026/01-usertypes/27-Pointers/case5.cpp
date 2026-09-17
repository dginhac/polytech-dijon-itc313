#include <iostream>
#include "date.h"

int main() {
    Date* dateptr = nullptr; // dateptr is a null pointer to Date
    Date pi_day(3,14); // pi_day is a Date
    dateptr = &pi_day; // dateptr now points to pi_day

    int day = (*dateptr).day();
    std::cout << "day: " << day << std::endl;
    // the above line can be written more simply as:
    int day2 = dateptr->day();
    std::cout << "day (v2): " << day2 << std::endl;
    return 0;
}
