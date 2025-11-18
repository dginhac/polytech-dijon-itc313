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

bool Date::operator == (const Date& other) const {
    return (month_ == other.month_ && day_ == other.day_);
}
bool Date::operator !=(const Date& other) const {
    return !(*this == other);
}
bool Date::operator < (const Date& other) const {
    if (month_<other.month_) return true;
    if ((month_ == other.month_) && (day()<other.day_)) return true;
    return false;
}
bool Date::operator>=(const Date& other) const {
    return !(*this < other); // negation of <
}
bool Date::operator > (const Date& other) const {
    // reuse operator < with swapped operands
    return other < *this;
}
bool Date::operator<=(const Date& other) const {
    // negation of < with swapped operands
    return !(other < *this);
}

Date Date::operator+(int days) const {
    if (days < 0) {          // if days < 0, call Date - (-days)
        return *this - (-days);
    }
    int new_day = day_ + days; // the new day is ok if new_day < end of month
    int new_month = month_; // the new month starts as the current month
    int days_in_month = get_days_in_month(new_month);
    // increment month while new_day exceeds days in month
    while (new_day > days_in_month) {
        new_day -= days_in_month;   // shift into next month
        ++new_month;
        if (new_month > 12) {
            new_month = 1;          // wrap around the year (no year field here)
        }
        days_in_month = get_days_in_month(new_month);
    }
    return Date(new_month, new_day);
}

Date Date::operator-(int days) const {
    if (days < 0) { //if days <0, we call Date + (-days)
        return *this + (-days);
    }
    int new_day   = day_ - days; // the new day is ok if > 0
    int new_month = month_;
    // We move backwards month by month as long as the day is <= 0
    while (new_day <= 0) {
        --new_month;
        if (new_month < 1) {        // wrap around: before January → December
            new_month = 12;
        }
        int days_in_month = get_days_in_month(new_month);
        new_day += days_in_month;   // we add a full month of days
    }
    return Date(new_month, new_day);
}

Date& Date::operator ++() {
    // prefix increment
    *this = *this + 1; // reuse Date + int
    return *this;
}
Date& Date::operator --()  {
    // prefix decrement
    *this = *this - 1; // reuse Date - int
    return *this;
}
Date Date::operator ++(int) {
    // postfix increment
    Date tmp = *this;
    *this = *this + 1; // reuse Date + int
    return tmp;
}
Date Date::operator --(int) {
    // postfix decrement
    Date tmp = *this;
    *this = *this - 1; // reuse Date - int
    return tmp;
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
