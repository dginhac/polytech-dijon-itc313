#include <iostream>
#include "date.h"

int main() {
    Date d1(5, 4);     // May 4
    std::cout << "init -> d1 = " << to_string(d1) << std::endl;
    d1++; // May 5
    std::cout << "d1++ -> d1 = " << to_string(d1) << std::endl;
    ++d1; // May 6
    std::cout << "++d1 -> d1 = " << to_string(d1) << std::endl;
    return 0;
}
