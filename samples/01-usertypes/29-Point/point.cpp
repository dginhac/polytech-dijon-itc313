#include <cmath>
#include "point.h"

Point::Point(double xval, double yval) : x(xval), y(yval) {
}

double Point::length() const {
    return std::sqrt(x*x + y*y);
}
