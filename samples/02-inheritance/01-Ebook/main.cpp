#include <iostream>
#include "book.h"
#include "ebook.h"

int main() {
    Author author("George Orwell");
    Book book("1984", author);
    Ebook ebook("1984", author, "http://example.com/1984");

    std::cout << "Author: " << ebook.author().name() << std::endl;
    std::cout << "Book: " << book.description() << std::endl;
    std::cout << "Ebook: "<< ebook.description() << std::endl;
    ebook.download();
    return 0;
}
