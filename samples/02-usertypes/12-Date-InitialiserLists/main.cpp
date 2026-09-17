#include "date.h"
#include "person.h"
#include <iostream>

int main() {
    const Date my_birthday(5, 26);
    Person me("Dom", "Ginhac", my_birthday);
    std::cout << "That's all folks!" << std::endl;
    return 0;
}
