#include <iostream>
#include "ebook.h"


Ebook::Ebook (const std::string& title, const Author& author, const std::string& url)
    : Book(title, author), url_(url) {}


std::string Ebook::description () const {
    return Book::description() + " [URL: " + url_ + "]";
}
void Ebook::download() const {
    // Simulate downloading the ebook
    std::cout << "Downloading the full book..." << std::endl;
}
void Ebook::download(int page) const {
    // Simulate downloading the ebook
    std::cout << "Downloading page " << page << "..." << std::endl;
}
void Ebook::download(int start, int end) const {
    // Simulate downloading the ebook
    std::cout << "Downloading from page " << start << " to page " << end << "..." << std::endl;
}
