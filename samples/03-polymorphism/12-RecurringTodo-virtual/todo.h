#ifndef TODO_H
#define TODO_H

#include <string>
#include "date.h"

enum class Category {
    Research, Teaching, Personal
};

enum class Priority {
    Low, Medium, High
};

class Todo {
public:
    Todo(const std::string& title, const Date& scheduledDate, Category category, Priority priority);

    const std::string& title() const;
    const Date& scheduledDate() const;
    Category category() const;
    Priority priority() const;
    bool isDone() const;

    void updateTitle(const std::string& title);
    void updateScheduledDate(const Date& date);
    void updateCategory(Category category);
    void updatePriority(Priority priority);
    void markAsDone();
    virtual bool isOverdue(const Date& date) const;

private:
    std::string title_;
    Date scheduled_date_;
    Category category_;
    Priority priority_;
    bool done_;
};

// Free function

std::ostream& operator<<(std::ostream& os, const Todo& todo);

bool task_is_late(const Todo& task, const Date& date);

#endif // TODO_H
