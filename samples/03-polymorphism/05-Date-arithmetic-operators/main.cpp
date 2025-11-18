#include <iostream>
#include "date.h"

int main() {
    Date d1(1, 28);     // January 28
    Date d2(3, 5);      // March 5
    Date result1 = d1 + 5;    // February 2
    Date result2 = d2 - 10;   // February 24
    Date future  = d1 + 40;   // March 9
    Date past    = d2 - 100;  // November 25
    std::cout << "d1" << " = " << to_string(d1) << std::endl;
    std::cout << "d2" << " = " << to_string(d2) << std::endl;
    std::cout << "d1 + 5  = " <<  to_string(result1) << std::endl;
    std::cout << "d2 - 10 = " <<  to_string(result2) << std::endl;
    std::cout << "d1 + 40 = " <<  to_string(future)  << std::endl;
    std::cout << "d2 - 100 = " <<  to_string(past)   << std::endl;
    return 0;
}
