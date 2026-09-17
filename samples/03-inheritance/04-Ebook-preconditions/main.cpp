#include <iostream>
#include "book.h"
#include "ebook.h"

int main() {
    Author author("George Orwell");
    Book book("Nineteen eighty four", author);
    Ebook ebook("Nineteen Eighty-Four)", author, "http://example.com/1984");
    book.setTitle("1984");
    std::cout << book.description() << std::endl;
    ebook.setTitle("1984");
    std::cout << ebook.description() << std::endl;
    return 0;
}
