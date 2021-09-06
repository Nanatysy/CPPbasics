#include <iostream>
#include "Fixed.hpp"

int main (void) {

	{
		Fixed a;
		Fixed c(1);
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << "===>increment and decrement tests<===" << std::endl;

		std::cout << "a: " << a << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "a++ : " << a++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;

		std::cout << std::endl;
		std::cout << "===>arithmetic operators tests<===" << std::endl;

		std::cout << b << " / " << a << " = " << b / a << std::endl;
		std::cout << b << " + " << a << " = " << b + a << std::endl;
		std::cout << b << " - " << a << " = " << b - a << std::endl;
		std::cout << b << " * " << a << " = " << b * a << std::endl;

		std::cout << std::endl;
		std::cout << "===>min, max tests<===" << std::endl;

		std::cout << "a: " << a << ", b: " << b << std::endl;
		std::cout << "max: " << Fixed::max(a, b) << std::endl;
		std::cout << "min: " << Fixed::min(a, b) << std::endl;
		std::cout << "a: " << a << ", c: " << c << std::endl;
		std::cout << "max2: " << Fixed::max(a, c) << std::endl;
		std::cout << "min2: " << Fixed::min(a, c) << std::endl;
	}

	{
		Fixed a;
		Fixed b(1);
		Fixed c(1.01f);
		Fixed d(c);

		std::cout << std::endl;
		std::cout << "===>comparison operators tests<===" << std::endl;

		if (a == b)
			std::cout << "a is equal to b" << std::endl;
		else
			std::cout << "a isn't equal to b" << std::endl;

		if (a != a)
			std::cout << "a isn't equal to a" << std::endl;
		else
			std::cout << "a is equal to a" << std::endl;

		if (a > b)
			std::cout << a << " > " << b << std::endl;
		else
			std::cout << a << " < " << b << std::endl;

		if (c >= d)
			std::cout << c << " >= " << d << std::endl;
		else
			std::cout << c << " < " << d << std::endl;

		if (c < b)
			std::cout << c << " < " << b << std::endl;
		else
			std::cout << c << " > " << b << std::endl;
	}

	return 0;
}