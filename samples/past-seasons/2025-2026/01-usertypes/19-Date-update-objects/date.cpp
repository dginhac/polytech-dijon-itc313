#include "date.h"
#include <stdexcept>  // for std::invalid_argument
#include <string>

bool Date::isDate(int month, int day) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28)) return false;
    if (((month == 4) || (month == 6) ||(month == 9) || (month == 11)) && (day > 30)) return false;
    return true;
}

Date::Date(int month, int day) : month_(month), day_(day) {
    if (!isDate(month, day)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(month) + "/" + std::to_string(day));
    }
}

int Date::month() const {
	return month_;
}

int Date::day() const {
	return day_;
}

void Date::updateMonth(int new_month) {
    if (!isDate(new_month, day_)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(new_month) + "/" + std::to_string(day_));
    }
    month_ = new_month;
}

void Date::updateDay(int new_day) {
    if (!isDate(month_, new_day)) {
        throw std::invalid_argument("Invalid date: " + std::to_string(month_) + "/" + std::to_string(new_day));
    }
    day_ = new_day;
}
