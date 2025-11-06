#include <iostream>
#include "book.h"

Author::Author (const std::string& name) : name_(name) {}

std::string Author::name () const {
    return name_;
}

Book::Book (const std::string& title, const Author& author, const std::string& url) : title_(title), author_(author), is_ebook_(false), url_(url) {
    if (!url.empty()) {
        is_ebook_ = true;
    }
}

std::string Book::description () const {
    std::string text = title_ + " by " + author_.name();
    if (is_ebook_) text += " [URL: " + url_ + "]";   // 👎 conditional behavior
    return  text;
}

void Book::download() const {
    if (!is_ebook_)
        throw std::logic_error("Not an eBook"); // 👎 runtime guard
    std::cout << "Downloading from " << url_ << std::endl;
}

Author Book::author() const {
    return author_;
}

std::string Book::title() const {
    return title_;
}
