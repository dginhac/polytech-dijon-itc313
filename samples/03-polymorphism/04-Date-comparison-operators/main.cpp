#include <iostream>
#include "date.h"

int main() {
    Date today(5, 26);
    Date start(5, 1);
    Date deadline(5, 31);

    if (today < deadline) {
        std::cout << "There is still time before the deadline." << std::endl;
    }

    if (today >= start && today <= deadline) {
        std::cout << "Today is inside the valid period." << std::endl;
    }
    return 0;
}
