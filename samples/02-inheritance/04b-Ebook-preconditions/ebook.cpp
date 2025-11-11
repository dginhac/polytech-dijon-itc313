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

void Ebook::setTitle(const std::string& title) {
    const std::string cleaned = trim(title);
    Book::setTitle(cleaned);
};


std::string trim(const std::string &s) {
    std::string result = s;
    size_t start = s.find_first_not_of(" \t\n\r");
    size_t end = s.find_last_not_of(" \t\n\r");

    if (start == std::string::npos)
        result.clear();  // String contains only whitespace
    else
        result = result.substr(start, end - start + 1);
    return result;
}
