#ifndef DATE_H
#define DATE_H

class Date {
public:
   // default constructor
   Date(int month=1, int day=1);
   // copy constructor
   Date(const Date& other);
   int month();
   int day();
private:
   int month_;
   int day_;
};
#endif // DATE_H
