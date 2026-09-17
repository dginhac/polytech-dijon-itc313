#include <iostream>
#include "date.h"

int main() {
    int* iptr; // iptr is a pointer to int
    double* dptr; // dptr is a pointer to double
    Date* dateptr; // dateptr is a pointer to Date

    iptr = nullptr; // ptr is initialized to null
    dptr = nullptr; // dptr is initialized to null
    dateptr = nullptr; // dateptr is initialized to null

    std::cout << "That's all Folks!" << std::endl;
    return 0;
}
