#include <iostream>
#include "date.h"

int main() {
    Date d1(5, 4);     // May 4
    std::cout << "d1" << " = " << to_string(d1) << std::endl;
    Date d2 = ++d1;    // d1 = d2 = May 5
    std::cout << "d1 =" << " = " << to_string(d1) << " - ";
    std::cout << ", d2 =" << " = " << to_string(d2) << std::endl;
    Date d3 = d1++;   // d3 = May 5, d1 = May 6
    std::cout << "d1 =" << " = " << to_string(d1) << " - ";
    std::cout << "d3" << " = " << to_string(d3) << std::endl;

    Date& rd1 = ++d1;
    std::cout << "d1 =" << " = " << to_string(d1) << " - ";
    std::cout << "rd1" << " = " << to_string(rd1) << std::endl;
    d1 = Date(3,14);
    std::cout << "d1 =" << " = " << to_string(d1) << " - ";
    std::cout << "rd1" << " = " << to_string(rd1) << std::endl;

    // Date& rd2 = d1++; COMPILER ERROR — cannot bind reference to temporary
    return 0;
}
