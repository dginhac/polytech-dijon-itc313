#include <iostream>
#include "date.h"

int main() {
    Date day1(3,14);
    Date day2(3,19);
    Date day3(5,26);
    bool before = is_before(day1, day2);
    std::cout << "Is " << to_string(day1) << " before " << to_string(day2) << "? " << (before ? "Yes" : "No") << std::endl;
    bool after = is_after(day2, day3);
    std::cout << "Is " << to_string(day2) << " after " << to_string(day3) << "? " << (after ? "Yes" : "No") << std::endl;
    return 0;
}
