#include "arithmetic.h"

int absolute(int value) {
    // Standard if
    if (value < 0)
        value = -value;
    return value;
}
float absolute(float value) {
    // Immediate if - Conditional operator
    return value < 0 ?  -value : value;
}
double absolute(double value) {
    return value < 0 ?  -value : value;
}
