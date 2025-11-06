#include <iostream>
#include "book.h"

int main() {
    Author author("George Orwell");
    Book book("1984", author);
    Book ebook("1984", author, "http://example.com/1984");

    std::cout << "Author: " << ebook.author().name() << std::endl;
    std::cout << "Book: " << book.description() << std::endl;
    std::cout << "Ebook: "<< ebook.description() << std::endl;
    ebook.download();
    book.download(); // This will throw an exception
    return 0;
}
