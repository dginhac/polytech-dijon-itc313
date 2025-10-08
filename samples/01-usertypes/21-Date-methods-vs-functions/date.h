#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
public:
   Date(int month=1, int day=1);
   int month() const;
   int day() const;
   void updateMonth(int new_month);
   void updateDay(int new_day);
   int dayOfYear() const;
   void incDay();
   Date nextDay() const;
private:
   int month_;
   int day_;
};

// Free functions
bool is_date(int month, int day);
int get_days_in_month(int month);
std::string to_string(Date d) ;


#endif // DATE_H
