#include <iostream>
#include "recurring-todo.h"

int main() {
    Todo groceries{"Buy groceries",
                  Date(11, 11),
                  Category::Personal,
                  Priority::Medium};
    std::cout << groceries << std::endl;
    std::cout << groceries.isOverdue(Date(12, 24)) << std::endl;

    RecurringTodo run{"Run", Date(11, 1),
                       Category::Personal,
                       Priority::High,
                       Date(11, 30), 3};
    std::cout << run << std::endl;
    std::cout << run.isOverdue(Date(11, 24)) << std::endl;
    std::cout << run.isOverdue(Date(12, 24)) << std::endl;
    return 0;
}
