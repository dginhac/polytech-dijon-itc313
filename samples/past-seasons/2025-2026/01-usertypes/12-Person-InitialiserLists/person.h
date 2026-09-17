#include <iostream>

#include "date.h"

class Person {
    public:
        Person(std::string firstname, std::string lastname, Date birthday);
    private:
        std::string firstname_;
        std::string lastname_;
        const Date birthday_;
};
