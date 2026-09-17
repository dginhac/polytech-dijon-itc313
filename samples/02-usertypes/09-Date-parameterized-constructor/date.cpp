#include "date.h"

Date::Date() {
    month_ = 1;
    day_ = 1;
}

Date::Date(int month, int day) {
    month_ = month;
    day_ = day;
}

int Date::month()  {
	return month_;
}

int Date::day()  {
	return day_;
}
