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
   Date nextDay() const;
private:
   int month_;
   int day_;
};

// Free functions
bool is_date(int month, int day);
int get_days_in_month(int month);
std::string to_string(const Date& d) ;
void swap(Date& d1, Date& d2);
bool is_before(const Date& d1, const Date& d2);
bool is_after(const Date& d1, const Date& d2);


bool operator == (const Date&, const Date&); // comparison operators
bool operator != (const Date&, const Date&);
bool operator < (const Date&, const Date&);
bool operator > (const Date&, const Date&);
bool operator <= (const Date&, const Date&);
bool operator >= (const Date&, const Date&);

Date operator + (const Date& date, const int days); // date + integer
Date operator + (const int days, const Date& date); // integer + date
Date operator - (const Date& date, const int days); // date - integer

#endif // DATE_H
