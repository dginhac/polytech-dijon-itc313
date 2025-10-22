#include <bitset>
#include <iostream>
#include <bitset>
#include "number.h"

int main() {
    Number nb;
    nb.real = 3.14159;
    std::cout << "Bits: " << std::bitset<32>(nb.integer) << std::endl;
    std::cout << "Float (ok): " << nb.real << std::endl;
    std::cout << "Int (nok): " << nb.integer << std::endl;

    nb.integer = 42;
    std::cout << "Bits: " << std::bitset<32>(nb.integer) << std::endl;
    std::cout << "Int (ok): " << nb.integer << std::endl;
    std::cout << "Float (nok): " << nb.real << std::endl;
    return 0;
}
