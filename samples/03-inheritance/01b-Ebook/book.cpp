#include "book.h"

Author::Author (const std::string& firstname, const std::string& lastname) : firstname_(firstname), lastname_(lastname) {}

std::string Author::firstname () const {
    return firstname_;
}

std::string Author::lastname () const {
    return lastname_;
}

Book::Book (const std::string& title, const Author& author) : title_(title), author_(author) {}

Author Book::author() const {
    return author_;
}

std::string Book::description () const {
    return  title_ + " by " + author_.firstname() + " " + author_.lastname();
}

std::string Book::title() const {
    return title_;
}
