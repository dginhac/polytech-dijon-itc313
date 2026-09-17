#include "recurring-todo.h"
#include <stdexcept>

// ---- Constructor ----
RecurringTodo::RecurringTodo(const std::string& title,
                             const Date& scheduled_date,
                             Category category,
                             Priority priority,
                             const Date& end_date,
                             int period_days)
    : Todo(title, scheduled_date, category, priority),
      end_date_(end_date),
      period_days_(period_days) {
    if (period_days_ <= 0) {
        throw std::invalid_argument("period_days must be positive");
    }
    // For a recurring task, the end date should be >= initial scheduled date
    if (end_date_ < scheduledDate()) {
        throw std::invalid_argument("end_date must be on or after the scheduled date");
    }
}

// ---- Accessors ----
const Date& RecurringTodo::endDate() const { return end_date_; }
int RecurringTodo::periodDays() const { return period_days_; }

// ---- Mutators ----
void RecurringTodo::updateEndDate(const Date& end_date) {
    if (end_date < scheduledDate()) {
        throw std::invalid_argument("end_date must be on or after the current scheduled date");
    }
    end_date_ = end_date;
}

void RecurringTodo::updatePeriodDays(int period_days) {
    if (period_days <= 0) {
        throw std::invalid_argument("period_days must be positive");
    }
    period_days_ = period_days;
}

// ---- Behavior specific to recurring todos ----
// Advance the scheduled date by one period if the next occurrence fits within the end_date.
// If the next occurrence exceeds end_date_, series has effectively ended.
void RecurringTodo::completeAndScheduleNext() {
    const Date next = scheduledDate()+ period_days_;
    if (next <= end_date_) {
        // Series continue : next occurrence scheduled
        updateScheduledDate(next); // reuse parent API: preserves invariants
    } else {
        // Series ended : mark as done without rescheduling
        markAsDone();  // respects postcondition of Todo ( LSP OK )
    }
}

// ---- Utility function ----
std::string recurring_todo_description(const RecurringTodo& rtodo) {
    // Start from the base description
    std::string text = todo_description(rtodo);
    // Add recurrence details
    text += " — every " + std::to_string(rtodo.periodDays()) + " days";
    text += " until " + to_string(rtodo.endDate());

    // If the series is finished, make it explicit
    if (rtodo.isDone()) {
        text += " [series complete]";
    }
    return text;
}
