#include <iostream>
#include "date.h"

int main() {
    try {
        Date pi_day_ok(3,14);  // Valid date
        std::cout << "ok:" << pi_day_ok.month() << "/" << pi_day_ok.day() << std::endl;
        Date pi_day_error(14,3); // Invalid date
        std::cout << "nok: " << pi_day_error.month() << "/" << pi_day_error.day() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error creating Date: " << e.what() << std::endl;
    }
return 0;
}
