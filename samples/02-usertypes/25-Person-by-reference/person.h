#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "date.h"

class Person {
public:
  Person(std::string firstname, std::string lastname, int gender, const Date birthday);
  std::string firstname() const;
  std::string lastname() const;
  int gender() const;
  const Date birthday() const;

  void setFirstname(std::string firstname);
  void setLastname(std::string lastname);

private:
  std::string firstname_;
  std::string lastname_;
  int gender_;
  const Date birthday_;
};

std::string getFullName(Person p);

void swap_names(Person& p);

#endif // PERSON_H
