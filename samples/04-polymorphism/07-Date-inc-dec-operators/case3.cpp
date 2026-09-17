#include <iostream>
#include "date.h"

int main() {
    Date d1(5, 4);     // May 4
    std::cout << "init         -> d1 = " << to_string(d1) << std::endl;
    // Date& rd1 = ++d1 -> Prefix operator assignment to reference
    // Date& rd2 = d1++ -> Postfix operator -> COMPILER ERROR: cannot bind reference to temporary
    Date& rd1 = ++d1; // d1 and rd1 = May 5
    std::cout << "rd1 = ++d1   -> d1 = " << to_string(d1) << " ; ";
    std::cout << "rd1" << " = " << to_string(rd1) << std::endl;
    d1 = Date(5,4);  // reset d1 and rd1 to May 4
    std::cout << "Reset to 5/4 -> d1 = " << to_string(d1) << " ; ";
    std::cout << "rd1 = " << to_string(rd1) << std::endl;
    return 0;
}
