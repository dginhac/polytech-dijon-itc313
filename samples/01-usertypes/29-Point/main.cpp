#include <iostream>
#include "point.h"

int main() {
   Point p1;
   std::cout << "p1(" << p1.x << "," << p1.y << ")" << std::endl;
   std::cout << "Length from origin: " << p1.length() << std::endl;
   p1.x = 4.5; // x is public
   p1.y = 3.2; // x is public
   std::cout << "p1(" << p1.x << "," << p1.y << ")" << std::endl;
   std::cout << "Length from origin: " << p1.length() << std::endl;
   return 0;
}
