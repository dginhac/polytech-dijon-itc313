#include <iostream>

// User-defined function
int maxOfTwo(int x, int y) {
    if (x > y) return x;
    else return y;
}

int main() {
    int a = 3, b = 7, c = 10;
    int max1 = maxOfTwo(a, b);
    std::cout << "Max of " << a << " and " << b << " is " << max1 << std::endl;
    int max2 = maxOfTwo(b, c);
    std::cout << "Max of " << b << " and " << c << " is " << max2 << std::endl;
    return 0;
}
