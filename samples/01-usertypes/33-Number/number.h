#ifndef NUMBER_H
#define NUMBER_H

union Number {
    // 4 bytes - IEEE 754 floating point
    float real;
    // 4 bytes  - signed integer (two's complement)
    int integer;
};

#endif // NUMBER_H
