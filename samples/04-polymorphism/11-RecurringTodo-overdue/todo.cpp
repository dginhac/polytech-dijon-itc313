#include "todo.h"
#include <sstream>
#include <stdexcept>
#include <string>

// Constructor — initializes all attributes and enforces invariants
Todo::Todo(const std::string& title, const Date& scheduledDate,
           Category category, Priority priority)
    : title_(title),
      scheduled_date_(scheduledDate),
      category_(category),
      priority_(priority),
      done_(false)
{
    if (title_.empty()) {
        throw std::invalid_argument("Title cannot be empty");
    }
}

// ---- Accessors ----
const std::string& Todo::title() const { return title_; }
const Date& Todo::scheduledDate() const { return scheduled_date_; }
Category Todo::category() const { return category_; }
Priority Todo::priority() const { return priority_; }
bool Todo::isDone() const { return done_; }

// ---- Mutators ----
void Todo::updateTitle(const std::string& title) {
    if (title.empty()) {
        throw std::invalid_argument("Title cannot be empty");
    }
    title_ = title;
}

void Todo::updateScheduledDate(const Date& date) {
    scheduled_date_ = date;
}

void Todo::updateCategory(Category category) {
    category_ = category;
}

void Todo::updatePriority(Priority priority) {
    priority_ = priority;
}

void Todo::markAsDone() {
    done_ = true;
}

bool Todo::isOverdue(const Date& date) const {
    return !isDone() && scheduledDate() < date;
}


// Free functions

std::ostream& operator<<(std::ostream& os, const Todo& todo) {
    os << todo.title() + std::string(" [");
    os << (todo.isDone() ? std::string("Done") : std::string("Pending"));
    os <<  std::string("] — ");

    // Category
    switch (todo.category()) {
        case Category::Research: os <<  std::string("Research"); break;
        case Category::Teaching: os <<  std::string("Teaching"); break;
        case Category::Personal: os <<  std::string("Personal"); break;
    }

    os <<  std::string(" — Priority ");
    switch (todo.priority()) {
        case Priority::Low:    os <<  std::string("Low"); break;
        case Priority::Medium: os <<  std::string("Medium"); break;
        case Priority::High:   os <<  std::string("High"); break;
    }

    os <<  std::string(" — Due: ") << todo.scheduledDate();
    return os;
}

bool task_is_late(const Todo& task, const Date& date) {
    return task.isOverdue(date);
}
