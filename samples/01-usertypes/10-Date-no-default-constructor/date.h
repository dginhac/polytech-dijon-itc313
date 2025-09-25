#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date() = default;
   Date(int month, int day);
   int month();
   int day();
private:
   int month_;
   int day_;
};
#endif // DATE_H
