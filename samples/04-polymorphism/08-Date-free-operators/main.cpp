#include <iostream>
#include "date.h"

int main() {
    Date d1(5, 4);     // May 4
    std::cout << "init -> d1 = " << to_string(d1) << std::endl;
    Date d2 = d1 + 5; // May 9
    std::cout << "d2 = d1 + 5 -> d2 = " << to_string(d2) << std::endl;
    d2 = 3 + d1; // May 7
    std::cout << "d2 = 3 + d1 -> d2 = " << to_string(d2) << std::endl;
    return 0;
}
