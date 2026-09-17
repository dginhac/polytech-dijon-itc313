#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int month=1, int day=1);
   int month() const;
   int day() const;
private:
   int month_;
   int day_;
   bool isDate(int month, int day);
};
#endif // DATE_H
