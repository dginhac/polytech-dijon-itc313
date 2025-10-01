#include <iostream>
#include "date.h"

int main() {
    Date love(2,14);
    std::cout << "Valentine day: " << love.month() << "/" << love.day() << std::endl;
    love.updateDay(30);
    return 0;
}
