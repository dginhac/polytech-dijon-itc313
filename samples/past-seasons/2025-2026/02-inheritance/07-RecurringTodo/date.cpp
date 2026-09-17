#include "date.h"
#include <stdexcept>  // for std::invalid_argument
#include <string>



Date::Date(int month, int day) : month_(month), day_(day) {
    if (!is_date(month, day)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(month) + "/" + std::to_string(day));
    }
}

int Date::month() const {
	return month_;
}

int Date::day() const {
	return day_;
}

int Date::dayOfYear() const{
    auto day=0;
    for (auto i=1;i<month_;i++) {
        day+=get_days_in_month(i);
    }
    day+= day_;
    return day;
}


void Date::updateMonth(int new_month) {
    if (!is_date(new_month, day_)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(new_month) + "/" + std::to_string(day_));
    }
    month_ = new_month;
}

void Date::updateDay(int new_day) {
    if (!is_date(month_, new_day)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(month_) + "/" + std::to_string(new_day));
    }
    day_ = new_day;
}

Date Date::nextDay() const {
    if (day_==get_days_in_month(month_)) {
        return Date((month_)%12 + 1, 1);
    }
    return Date(month_, day_+1);
}

// Free functions
bool is_date(int month, int day) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||(month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

int get_days_in_month(int month) {
    if ((month < 1) || (month>12)) {
        throw std::invalid_argument("Invalid month  : " + std::to_string(month));
    }
    if (month == 2) return 28;
    if ((month == 4 || month == 6 || month == 9 || month == 11)) return 30;
    return 31;
}

std::string to_string(const Date& d) {
    return std::to_string(d.month()) + "/" + std::to_string(d.day());
}

void swap(Date& d1, Date& d2) {
    Date temp = d1;
    d1 = d2;
    d2 = temp;
}

bool is_before(const Date& d1, const Date& d2) {
    if (d1.month() < d2.month()) return true;
    if (d1.month() == d2.month() && d1.day() < d2.day()) return true;
    return false;
}

bool is_after(const Date& d1, const Date& d2) {
    return is_before(d2, d1);
}

bool operator == (const Date& d1,const Date& d2) { // check for equality
    if( (d1.day()==d2.day()) && (d1.month()==d2.month())) {
        return true;
    }
return false;
}

bool operator !=(const Date& d1, const Date& d2) {
    return !(d1==d2);
}

bool operator < (const Date& d1, const Date& d2) {

    if (d1.month()<d2.month()) {
        return true;
    }
    else if (d1.month()>d2.month()) {
        return false;
    } else { // same month
        if ( d1.day()<d2.day()) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}


bool operator > (const Date& d1, const Date& d2) {
    if (d1==d2) {
        return false;
    }
    if (d1<d2) {
        return false;
    }
    return true;
}

bool operator <=(const Date& d1, const Date& d2) {
    if (d1==d2) {
        return true;
    }
    return (d1<d2);
}

bool operator >=(const Date& d1, const Date& d2) {
    if (d1==d2) {
        return true;
    }
    return (d1>d2);
}

Date operator + (const Date& date, const int days) {
    if (days <0) { //if days <0, we call Date - (-days)
        return date - (-days);
    }
    Date tmp = date; // the current date
    int new_day = tmp.day() + days; // the new day is ok if new_day < end of month
    int new_month = tmp.month();
    int days_in_month = get_days_in_month(tmp.month());
    while (new_day > days_in_month) { // end of the month
        new_day -= days_in_month; // the day in the next month
        new_month++;
        if (new_month > 12) { // end of the year
            new_month = 1;
        }
        //tmp.updateMonth(new_month);
        //days_in_month = getDaysInMonth(tmp.month());
        days_in_month = get_days_in_month(new_month);
    }
    return Date(new_month, new_day);
}

Date operator + (const int days, const Date& date) {
    return date + days;
}

Date operator - (const Date& date, const int days) {
    if (days <0) { //if days <0, we call Date + (-days)
        return date + (-days);
    }
    int new_month=date.month();
    int new_day = date.day()-days; // the new day is ok if > 0
    while (new_day <=0) {
        if (new_month==1) { // beginning of the year
            new_month=12; // in december
            new_day=31+new_day;
        }
        else { // other months than january
            int days_in_previous_month = get_days_in_month(Date(new_month-1,1).month());
            new_day = days_in_previous_month+new_day;
            new_month--;
        }
    }
    return Date(new_month, new_day);
}
