#include <iostream>
#include "date.h"

int main() {
  Date a_day(7,31);
  std::cout << "a day: " << a_day.month() << "/" << a_day.day() << std::endl;
  std::cout << "day #" << a_day.dayOfYear() << std::endl;
  a_day.incDay();
  std::cout << "After incDay: " << a_day.month() << "/" << a_day.day() << std::endl;
  Date b_day = a_day.nextDay();
  std::cout << "After nextDay: " << b_day.month() << "/" << b_day.day() << std::endl;
  return 0;
}
