#include <iostream>

int main() {
    int a = 3, b = 7, c = 10;
    // Find max between a and b
    int max1;
    if (a > b) max1 = a;
    else max1 = b;
    // Find max between b and c
    int max2;
    if (b > c) max2 = b;
    else max2 = c;

    std::cout << "Max of " << a << " and " << b << " is " << max1 << std::endl;
    std::cout << "Max of " << b << " and " << c << " is " << max2 << std::endl;
    return 0;
}
