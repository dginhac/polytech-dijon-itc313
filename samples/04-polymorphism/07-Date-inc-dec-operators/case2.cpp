#include <iostream>
#include "date.h"

int main() {
    Date d1(5, 4);     // May 4
    std::cout << "init           -> d1 = " << to_string(d1) << std::endl;
    Date d2 = ++d1;    // Prefix: d1 = d2 (new object) = May 5
    std::cout << "d2 = ++d1      -> d1 = " << to_string(d1) << " ; ";
    std::cout << "d2 = " << to_string(d2) << std::endl;
    d1 = Date(3,14);  // Update d1 to March 14, d2 unchanged = May 5
    std::cout << "Update to 3/14 -> d1 = " << to_string(d1) << " ; ";
    std::cout << "d2 = " << to_string(d2) << std::endl << std::endl;

    d1 = Date(5, 4);     // May 4
    std::cout << "Reset to 5/4  -> d1 = " << to_string(d1) << std::endl;
    Date d3 = d1++;   // Postfix: d1 = May 5, d3 (new object) = May 4
    std::cout << "d3 = d1++     -> d1 = " << to_string(d1) << " ; ";
    std::cout << "d3 = " << to_string(d3) << std::endl;
    d1 = Date(3,14);  // Update d1 to March 14, d3 unchanged = May 5
    std::cout << "Update        -> d1 = " << to_string(d1) << " ; ";
    std::cout << "d3 = " << to_string(d3) << std::endl;
    return 0;
}
