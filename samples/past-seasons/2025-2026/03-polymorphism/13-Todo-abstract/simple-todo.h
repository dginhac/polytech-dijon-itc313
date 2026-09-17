#ifndef SIMPLE_TODO_H
#define SIMPLE_TODO_H

#include <string>
#include "todo.h"

class SimpleTodo : public Todo {
public:
    using Todo::Todo;
    bool isOverdue(const Date& today) const;
};

#endif // SIMPLE_TODO_H
