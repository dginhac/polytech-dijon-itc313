#include <iostream>

int main() {
    int value=42;
    int* iptr = &value;
    // print the value pointed to by iptr
    std::cout << "*iptr: " << *iptr << std::endl;
    // value2 is initialized to the value pointed by iptr plus 10
    int value2 = *iptr + 10;
    std::cout << "value2: " << value2 << std::endl;
    // change the value pointed by iptr
    *iptr = 21;
    std::cout << "*iptr: " << *iptr << std::endl;
    // value is also changed because iptr points to value
    std::cout << "value: " << value << std::endl;
    // but value2 is unchanged because it is a different variable
    std::cout << "value2: " << value2 << std::endl;
    return 0;
}
