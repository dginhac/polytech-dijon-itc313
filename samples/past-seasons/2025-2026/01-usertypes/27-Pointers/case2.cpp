#include <iostream>

int main() {

    int value1 = 42;
    int value2 = 666;
    int* iptr = nullptr; // iptr is initialized to null
    iptr = &value1; // iptr points to value1
    iptr = &value2; // iptr now points to value2

    // print the address of value1
    std::cout << "&value1: " << &value1 << std::endl;
    // print the address of value2
    std::cout << "&value2: " << &value2 << std::endl;
    // print the address stored in iptr (address of value2)
    std::cout << "iptr: " << iptr << std::endl;
    // print the address of iptr (different from address of value2)
    std::cout << "&iptr: " << &iptr << std::endl;
    return 0;
}
