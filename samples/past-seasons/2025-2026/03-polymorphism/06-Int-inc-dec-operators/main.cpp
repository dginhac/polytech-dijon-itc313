#include <iostream>

int main() {
    int i = 5;
    i++; // postfix operator - returns an rvalue
    std::cout << "i after i++: " << i << std::endl; // Outputs 6
    ++i; // prefix operator -- returns an lvalue
    std::cout << "i after ++i: " << i << std::endl; // Outputs 7
    ++++i; // RIGHT: equivalent to ++(++i) because prefix returns an lvalue
    // i++++; ERROR: postfix does not return an lvalue
    std::cout << "i after ++++i: " << i << std::endl; // Outputs 9
    (++i)++; // RIGHT: postfix applied to the lvalue returned by prefix
    // ++(i++) or ++i++; ERROR: prefix cannot be applied to the rvalue returned by
    std::cout << "i after (++i)++: " << i << std::endl; // Outputs 11
    int j = ++i;   // i becomes 12, j = 12
    std::cout << "i,j after j = ++i: " << i << "," << j << std::endl; // Outputs 12,12
    j = i++; // j = 12, then i becomes 13
    std::cout << "i,j after j = i++: " << i << "," << j << std::endl; // Outputs 13,12
    return 0;
}
