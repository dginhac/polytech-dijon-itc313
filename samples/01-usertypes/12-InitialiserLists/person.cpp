#include "person.h"

// Constructor without member initializer list
/*
 Person::Person(std::string firstname, std::string lastname, const Date birthday) {
    firstname_ = firstname;
    lastname_ = lastname;
    // This would cause a compilation error because birthday_ is const
    birthday_ = birthday;
}
*/
// Constructor with member initializer list
 Person::Person(std::string firstname, std::string lastname, const Date birthday) :  firstname_(firstname), lastname_(lastname), birthday_(birthday) { }
