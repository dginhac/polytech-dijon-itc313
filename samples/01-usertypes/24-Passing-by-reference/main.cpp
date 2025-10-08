#include <iostream>

void foo(int& y) {
    y++;
}
int main() {
    int x = 5;
    // Create an explicit reference z
    int& z = x;
    std::cout << "Before foo, x = " << x << " - z = " << z << std::endl;
    // Call foo with the reference z
    foo(z);
    std::cout << "After foo(z), x = " << x << " - z = " << z << std::endl;
    // Compiler creates an implicit reference
    // on x and call foo
    foo(x);
    std::cout << "After foo(x), x = " << x << " - z = " << z << std::endl;
    return 0;
}
