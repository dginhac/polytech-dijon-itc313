#include <iostream>

int main() {
    double golden = 1.61803; // The golden ratio
    double test = 0.0; // A test variable
    double* dptr = &golden;
    double& ref = golden;
    std::cout << "&golden= " << &golden << std::endl;
    std::cout << "&ref = " << &ref << std::endl;
    std::cout << "dptr = " << dptr << std::endl;
    std::cout << "&dptr = " << &dptr << std::endl;
    std::cout << "&test = " << &test << std::endl;
    dptr = &test; // Now dptr points to test
    std::cout << "dptr = " << dptr << std::endl;
    return 0;
}
