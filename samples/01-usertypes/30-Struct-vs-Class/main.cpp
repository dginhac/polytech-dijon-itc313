#include <iostream>
#include "pointstruct.h"
#include "pointclass.h"

int main () {
   PointStruct ps1;
   ps1.x = 4.5; // x is public
   ps1.y = 3.2; // x is public
   std::cout << "ps1(" << ps1.x << "," << ps1.y << ")" << std::endl;

   PointClass pc1;
   pc1.x = 4.5; // Error: x is private
   pc1.y = 3.2; // Error: y is private
   std::cout << "pc1(" << pc1.x << "," << pc1.y << ")" << std::endl;
   return 0;
}
