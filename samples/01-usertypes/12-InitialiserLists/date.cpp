#include "date.h"

Date::Date(int month, int day) : month_(month), day_(day) {
    // Nothing to do
}

int Date::month()  {
	return month_;
}

int Date::day()  {
	return day_;
}
