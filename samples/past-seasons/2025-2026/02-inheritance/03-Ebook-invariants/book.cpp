#include "book.h"

Author::Author (const std::string& name) : name_(name) {}

std::string Author::name () const {
    return name_;
}

Book::Book (const std::string& title, const Author& author) : title_(title), author_(author) {
    if (title.empty()) throw std::invalid_argument("Title cannot be empty");
}

Author Book::author() const {
    return author_;
}

std::string Book::description () const {
    return  title_ + " by " + author_.name();
}

std::string Book::title() const {
    return title_;
}
