#include <iostream>
#include "ebook.h"


Ebook::Ebook (const std::string& title, const Author& author, const std::string& url)
    : Book(title, author), url_(url) {}


std::string Ebook::description () const {
    return Book::description() + " [URL: " + url_ + "]";
}
void Ebook::download() const {
    // Simulate downloading the ebook
    std::cout << "Downloading from " << url_ << "..." << std::endl;
}

void Ebook::clearTitle() {
    Book::setTitle("");
};
