#include "date.h"

Date::Date() {
    month_ = 1;
    day_ = 1;
}

int Date::month()  {
	return month_;
}

int Date::day()  {
	return day_;
}
