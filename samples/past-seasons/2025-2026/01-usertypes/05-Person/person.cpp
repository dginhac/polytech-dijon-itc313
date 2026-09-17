#include "person.h"

Person::Person(std::string firstname, std::string lastname, int gender) {
  firstname_ = firstname;
  lastname_ = lastname;
  gender_ = gender;
}

std::string Person::getFullName() {
  if (gender_==1) {
    return "Mr " + firstname_ + " " + lastname_;
  }
  if (gender_==2) {
      return "Ms " + firstname_ + " " + lastname_;
  }
  // Non-binary
  return firstname_ + " " + lastname_;
}
