#include <iostream>
#include "date.h"

int main() {
  Date d;
  std::cout << "Default: " << d.month() << "/" << d.day() << std::endl;
  Date pi_day(3,14);
  std::cout << "Pi day: " << pi_day.month() << "/" << pi_day.day() << std::endl;
  Date star_wars_day(5,4);
  std::cout << "Star wars day: " << star_wars_day.month() << "/" << star_wars_day.day() << std::endl;
  return 0;
}
