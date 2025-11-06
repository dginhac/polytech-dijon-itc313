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
private:
    std::string title_;
    Author author_;
    bool is_ebook_;
    std::string url_;
public:
    Book (const std::string& title, const Author& author, const std::string& url = "");
    std::string description () const;
    std::string title() const;
    Author author() const;
    void download() const;
};

#endif // BOOK_H
