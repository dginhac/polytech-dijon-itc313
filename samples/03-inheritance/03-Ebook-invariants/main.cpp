#include <iostream>
#include "book.h"
#include "ebook.h"

int main() {
    Author author("George Orwell");
    Ebook ebook("1984", author, "http://example.com/1984");

    std::cout << "Ebook: "<< ebook.description() << std::endl;
    ebook.clearTitle();
    std::cout << "Ebook: "<< ebook.description() << std::endl;
    return 0;
}
