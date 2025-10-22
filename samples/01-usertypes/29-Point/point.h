#ifndef POINT_H
#define POINT_H

struct Point {
    double x; // x and y are public
    double y; // No need to write getters/setters
    // Constructor with default values
    Point(double xval=0.0, double yval=0.0);
    // Length from origin
    double length() const;
};

#endif // POINT_H
