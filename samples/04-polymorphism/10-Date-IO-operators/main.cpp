#include <iostream>
#include "date.h"

int main() {
    Date d1(5, 4);     // May 4
    std::cout << "With to_string -> d1 = " << to_string(d1) << std::endl;
    std::cout << "with << -> d1 = " << d1 << std::endl;
    return 0;
}
