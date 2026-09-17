#include <iostream>
#include "recurring-todo.h"

int main() {
    Todo groceries{"Buy groceries", Date(11, 11),
                  Category::Personal,
                  Priority::Medium};
    RecurringTodo run{"Run", Date(11, 1),
                       Category::Personal,
                       Priority::High,
                       Date(11, 30), 3};
    std::cout << groceries.isOverdue(Date(11, 24)) << std::endl;
    std::cout << task_is_late(groceries, Date(11, 24)) << std::endl;
    std::cout << run.isOverdue(Date(11, 24)) << std::endl;
    std::cout << task_is_late(run, Date(11, 24)) << std::endl;
    return 0;
}
