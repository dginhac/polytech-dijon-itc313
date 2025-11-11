#include <iostream>
#include "todo.h"

int main() {
    std::string title = "Finish slides on C++";
    Date due_date(12,1);
    Todo todo1(title, due_date, Category::Teaching, Priority::Medium);
    std::cout << description(todo1) << std::endl;
    // Update due date and priority
    todo1.updateScheduledDate(Date(12,15));
    todo1.updatePriority(Priority::High);
    std::cout << description(todo1) << std::endl;
    // All slides are ready, mark as done
    todo1.markAsDone();
    std::cout << description(todo1) << std::endl;
    return 0;
}
