#include <iostream>
#include "status.h"

int main() {
    Status task = Delayed;
    std::cout << "Delayed task: " << task << std::endl;
    task = Done;
    if (task == Urgent) {
        std::cout << "Task requires immediate attention!" << std::endl;
        return 0;
        }
    if (task == Done) {
        std::cout << "Task completed." << std::endl;
        return 0;
    }
    std::cout << "Task still in progress..." << std::endl;
    return 0;
}
