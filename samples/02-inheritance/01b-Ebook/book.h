#ifndef BOOK_H
#define BOOK_H

#include <string>

class Author {
private:
    std::string firstname_;
    std::string lastname_;
public:
    Author (const std::string& firstname,
            const std::string& lastname);
    std::string firstname () const;
    std::string lastname () const;
};

class Book {
private:
    std::string title_;
    Author author_;
public:
    Book (const std::string& title, const Author& author);
    std::string description () const;
    std::string title() const;
    Author author() const;
};

#endif // BOOK_H
