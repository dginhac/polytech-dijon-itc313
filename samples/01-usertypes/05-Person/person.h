#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
  Person(std::string firstname, std::string lastname, int gender);
  std::string getFullName();

private:
  std::string firstname_;
  std::string lastname_;
  int gender_;
};


#endif // PERSON_H
