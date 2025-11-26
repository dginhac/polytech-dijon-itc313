#include "simple-todo.h"

bool SimpleTodo::isOverdue(const Date& today) const {
    return !isDone() && scheduledDate() < today;
}
