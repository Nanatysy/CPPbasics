//
// Created by Debby Willette on 9/7/21.
//

#include "whatever.hpp"

int main(void)
{
	{
		int a = 5;
		int b = 0;

		char c1 = 'a';
		char c2 = 'b';

		std::cout << a << b << std::endl;
		swap(a, b);
		std::cout << a << b << std::endl;
		std::cout << c1 << c2 << std::endl;
		swap(c1, c2);
		std::cout << c1 << c2 << std::endl;

		std::cout << "---------------------" << std::endl;

		std::cout << max(5, 0) << std::endl;
		std::cout << max(5.5, 0.6) << std::endl;
		std::cout << max('g', 'p') << std::endl;

		std::cout << "---------------------" << std::endl;
		std::cout << min(5, 0) << std::endl;
		std::cout << min(5.5, 0.6) << std::endl;
		std::cout << min('g', 'p') << std::endl;
	}

	std::cout << "---------------------" << std::endl;

	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	return (0);
}