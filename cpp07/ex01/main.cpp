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
	return (0);
}