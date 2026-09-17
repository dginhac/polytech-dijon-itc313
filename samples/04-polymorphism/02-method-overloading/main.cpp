#include <iostream>
#include "book.h"
#include "ebook.h"

int main() {
    Author author("George Orwell");
    Ebook ebook("1984", author, "http://example.com/1984");
    ebook.download();
    ebook.download(42);
    ebook.download(10, 20);
    return 0;
}
