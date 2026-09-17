#include <iostream>
#include "arithmetic.h"

int main() {
    auto a = 3, b = 7, c = 10;
    auto max1 = max_of_two(a, b);
    std::cout << "Max of " << a << " and " << b << " is " << max1 << std::endl;
    auto evenNumber = is_even(c);
    std::cout << c << " is even? " << (evenNumber ? "true" : "false") << std::endl;
    return 0;
}
