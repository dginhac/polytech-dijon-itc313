#include <iostream>

int main() {
    // The golden ratio
    double golden=1.61803;
    // dptr is a pointer to golden
    double* dptr = &golden;
    // ref is a reference to golden
    double& ref = golden;
    std::cout << "golden = " << golden << std::endl;
    std::cout << "ref = " << ref << std::endl;
    std::cout << "dptr = " << dptr << std::endl;
    std::cout << "&golden= " << &golden << std::endl;
    std::cout << "&ref = " << &ref << std::endl;
    std::cout << "&dptr = " << &dptr << std::endl;
    return 0;
}
