#include "person.h"
#include "date.h"

Person::Person(std::string firstname, std::string lastname, Date birthday) :  firstname_(firstname), lastname_(lastname), birthday_(birthday) {
    // Nothing to do
}

/*
 * This version does not compile because birthday_ is const
 *
Person::Person(std::string firstname, std::string lastname, Date birthday) {
    firstname_ = firstname;
    lastname_ = lastname;
    birthday_ = birthday;
}
*/
