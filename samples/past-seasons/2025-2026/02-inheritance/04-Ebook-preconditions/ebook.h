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
    std::string description () const;
    void setTitle(const std::string& title);

};
#endif // EBOOK_H
