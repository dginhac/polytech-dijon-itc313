#ifndef BOOK_H
#define BOOK_H

#include <string>

class Author {
private:
    std::string name_;
public:
    Author (const std::string& name);
    std::string name () const;
};

class Book {
protected:
    std::string title_;
    Author author_;
public:
    Book (const std::string& title, const Author& author);
    std::string description () const;
    std::string title() const;
    Author author() const;
};

#endif // BOOK_H
