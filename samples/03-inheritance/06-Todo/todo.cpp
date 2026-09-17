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

// ---- Utility function ----
std::string description(const Todo& todo) {
    std::ostringstream out;
    out << todo.title() << " [";
    out << (todo.isDone() ? "Done" : "Pending");
    out << "] — ";

    // Category
    switch (todo.category()) {
        case Category::Research:     out << "Research"; break;
        case Category::Teaching: out << "Teaching"; break;
        case Category::Personal:    out << "Personal"; break;
    }

    out << " — Priority ";
    switch (todo.priority()) {
        case Priority::Low:    out << "Low"; break;
        case Priority::Medium: out << "Medium"; break;
        case Priority::High:   out << "High"; break;
    }

    out << " — Due: " << to_string(todo.scheduledDate());
    return out.str();
}
