#include "person.h"
#include <iostream>


Person::Person(std::string firstname, std::string lastname, int gender, const Date birthday) :
firstname_(firstname), lastname_(lastname), gender_(gender), birthday_(birthday){
}

std::string Person::firstname() const {
    return firstname_;
}

std::string Person::lastname() const {
    return lastname_;
}

int Person::gender() const {
    return gender_;
}

const Date Person::birthday() const {
    return birthday_;
}

void Person::setFirstname(std::string firstname) {
    firstname_=firstname;
}

void Person::setLastname(std::string lastname) {
    lastname_ = lastname;
}

std::string getFullName(Person p){

    std::string birthday = std::to_string(p.birthday().month()) + "/"
    + std::to_string(p.birthday().day());
    if (p.gender()==1) {
        return "Mr " + p.firstname() + " " + p.lastname() + " ("
                     + birthday + ")";
    }
    if (p.gender()==2) {
        return "Ms " + p.firstname() + " " + p.lastname() + " ("
                     + birthday + ")";
    }
    // Non-binary
    return p.firstname() + " " + p.lastname() + " ("
                 + birthday + ")";
}

void swap_names(Person p) {
    std::string firstname= p.firstname();
    p.setFirstname(p.lastname());
    p.setLastname(firstname);
}
