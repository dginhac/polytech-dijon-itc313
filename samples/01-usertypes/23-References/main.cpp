#include <iostream>
#include "date.h"

int main() {
	int value = 5; // value is 5
	int& number = value; // reference to variable value
	std::cout << "value: " << value << std::endl;
	std::cout << "ref: " << number << std::endl;
	value = 6;
	std::cout << "value: " << value << std::endl;
	std::cout << "ref: " << number << std::endl;

	Date love(2,14);     // Valentine's day
	Date& day = love;    // reference to valentine's day
	std::cout << "love: " << to_string(love) << std::endl;
	std::cout << "ref: " << to_string(day) << std::endl;
	love.updateDay(15); // change love to 15th of February
    std::cout << "love: " << to_string(love) << std::endl;
    std::cout << "ref: " << to_string(day) << std::endl;
	return 0;
}
