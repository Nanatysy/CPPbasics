//
// Created by Debby Willette on 9/7/21.
//

#include "iter.hpp"

void inc(int & src)
{
	src++;
}

void dec(int & src)
{
	src--;
}

void my_toupper(char & c)
{
	c = toupper(c);
}

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main(void)
{
	{
		int array[4];

		array[0] = 1;
		array[1] = 2;
		array[2] = 3;
		array[3] = 4;

		for (int i = 0; i < 4; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;

		iter(array, 4, inc);

		for (int i = 0; i < 4; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;

		iter(array, 4, dec);

		for (int i = 0; i < 4; i++)
			std::cout << array[i] << " ";
		std::cout << std::endl;
	}

	std::cout << "-------------------------" << std::endl;

	{
		char str[] = "hello World";

		std::cout << str << std::endl;

		iter(str, strlen(str), my_toupper);

		std::cout << str << std::endl;
	}

	std::cout << "-------------------------" << std::endl;
	std::cout << "checklist check" << std::endl;
	std::cout << "-------------------------" << std::endl;

	{
		int tab[] = { 0, 1, 2, 3, 4 };
		Awesome tab2[5];

		iter( tab, 5, print );
		iter( tab2, 5, print );
	}
	return (0);
}