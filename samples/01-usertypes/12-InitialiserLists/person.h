#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "date.h"

class Person {
    public:
        Person(std::string firstname, std::string lastname, const Date birthday);
    private:
        std::string firstname_;
        std::string lastname_;
        const Date birthday_;
};
#endif // PERSON_H
