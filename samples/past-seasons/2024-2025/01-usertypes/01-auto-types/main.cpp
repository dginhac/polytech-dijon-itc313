#include <iostream>

int main() {
	// Typed variables can be defined without initialization
	// but auto variables must be initialized to infer the type
	auto one = 1;
	auto pi = 3.14159;
	auto a = 'A';
	auto hello_world = "hello, world";

	// generate a compilation error
	auto a_string_not_initialized;

	return 0;
}
