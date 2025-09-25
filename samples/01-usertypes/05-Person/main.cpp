#include <iostream>
#include "person.h"

int main() {
  // Direct Initialization -- The classic, simple way
  Person dg("Dom", "Ginhac", 1);
  std::string fullname = dg.getFullName();
  std::cout << "Hello " << fullname << std::endl;

  // Copy Initialization -- The = sign is used.
  auto taylor = Person("Taylor", "Swift", 2);
  std::cout << "Hello " << taylor.getFullName() << std::endl;

  // List Initialization -- The modern, unified way.
  auto miley = Person{"Miley", "Cyrus", 3};
  std::cout << "Hello " << miley.getFullName() << std::endl;

  std::cout << "That's all folks" << std::endl;
  return 0;
}
