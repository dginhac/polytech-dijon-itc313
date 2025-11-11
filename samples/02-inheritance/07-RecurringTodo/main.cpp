#include <iostream>
#include "recurring-todo.h"

int main() {
    // --- Case 1: A single Todo ---
    Todo todo{"Buy groceries",
              Date(1, 12),
              Category::Personal,
              Priority::Medium};
    todo.markAsDone();
    std::cout << todo_description(todo) << "\n";
    // --- Case 2: A recurring Todo ---
    RecurringTodo rent{"Run", Date(1, 5),
                       Category::Personal,
                       Priority::High,
                       Date(1, 31), 3};
    while (!rent.isDone()) {
        std::cout << recurring_todo_description(rent) << std::endl;
        rent.completeAndScheduleNext();
    }
    std::cout << recurring_todo_description(rent) << std::endl;
    return 0;
}
