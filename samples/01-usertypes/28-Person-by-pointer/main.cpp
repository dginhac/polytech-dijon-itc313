#include <iostream>
#include "person.h"

int main() {
    Person me("Ginhac", "Dom", 1, Date(5,26));
    std::cout << "Before swap: " << getFullName(me) << std::endl;
    swap_names(&me);
    std::cout << "After swap: " << getFullName(me) << std::endl;
    return 0;
}
