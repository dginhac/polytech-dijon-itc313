#include <iostream>

// User-defined function
int max_of_two(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main() {
    int a = 3, b = 7, c = 10;
    int max1 = max_of_two(a, b);
    std::cout << "Max of " << a << " and " << b << " is " << max1 << std::endl;
    int max2 = max_of_two(b, c);
    std::cout << "Max of " << b << " and " << c << " is " << max2 << std::endl;
    return 0;
}
