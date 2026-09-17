#ifndef RECURRING_TODO_H
#define RECURRING_TODO_H

#include "todo.h"

class RecurringTodo : public Todo {
public:
    RecurringTodo(const std::string& title,
                  const Date& scheduled_date,
                  Category category,
                  Priority priority,
                  const Date& end_date,
                  int period_days);
    // Accessors
    const Date& endDate() const;
    int periodDays() const;
    // Mutators
    void updateEndDate(const Date& end_date);
    void updatePeriodDays(int period_days);
    // Behavior specific to recurring todos
    void completeAndScheduleNext();
private:
    Date end_date_;
    int period_days_;
};

// Utility function (for display)
std::string recurring_todo_description(const RecurringTodo& rtodo);


#endif // RECURRING_TODO_H
