#ifndef EBOOK_H
#define EBOOK_H

#include <string>
#include "book.h"

class Ebook : public Book {
private:
    std::string url_;
public:
    Ebook (const std::string& title, const Author& author, const std::string& url);
    void download() const;
    void download(int page) const;
    void download(int start, int end) const;
    std::string description () const;
};
#endif // EBOOK_H
