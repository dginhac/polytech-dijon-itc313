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

   bool operator == (const Date& other) const; // d1 == d2
   bool operator != (const Date& other) const; // d1 != d2
   bool operator < (const Date& other) const;  // d1 <  d2
   bool operator > (const Date& other) const;  // d1 >  d2
   bool operator <= (const Date& other) const; // d1 <= d2
   bool operator >= (const Date& other) const; // d1 <= d2

   Date operator + (int days) const; // date + integer
   Date operator - (int days) const; // date - integer
   Date& operator ++ (); // prefix increment: ++date
   Date& operator -- (); // prefix decrement: --date
   Date operator ++ (int); // use a dummy int param for postfix increment: date++
   Date operator -- (int); // use a  dummy int param for postfix decrement: date--
private:
   int month_;
   int day_;
};

// Free functions
bool is_date(int month, int day);
int get_days_in_month(int month);
std::string to_string(const Date& d) ;
void swap(Date& d1, Date& d2);







#endif // DATE_H
