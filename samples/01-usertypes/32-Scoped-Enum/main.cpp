#include <iostream>
#include "status.h"
#include "task.h"

int main() {
    Status s = Status::Done;
    Task t = Task::Done;
    if (t == Task::Done)
        std::cout << "Task is done!" << std::endl;
    std::cout << "Status value: " << static_cast<int>(s) << std::endl;
    return 0;
}
