#include <iostream>
#include "simple-todo.h"
#include "recurring-todo.h"

int main() {
    SimpleTodo groceries{"Buy groceries", Date(11, 11),
                  Category::Personal,
                  Priority::Medium};
    RecurringTodo run{"Run", Date(11, 1),
                       Category::Personal,
                       Priority::High,
                       Date(11, 20), 3};
    std::cout << groceries << std::endl;

    while (!run.isDone()) {
            std::cout << run << std::endl;
            run.completeAndScheduleNext();
        }
    std::cout << run << std::endl;
    return 0;
}
