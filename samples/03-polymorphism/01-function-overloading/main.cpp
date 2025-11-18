#include<iostream>
#include "arithmetic.h"

int main() {
    int a = -5;
    float b = 5.5;
    std::cout << "Abs(" << a << ") = " << absolute(a) << std::endl;
    std::cout << "Abs(" << b << ") = " << absolute(b) << std::endl;
    // Directly using a literal -> calls the double version
    std::cout << "Abs(3.14) = " << absolute(3.14) << std::endl;
    return 0;
}
