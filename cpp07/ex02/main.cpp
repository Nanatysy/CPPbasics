//
// Created by Debby Willette on 9/7/21.
//

#include "Array.hpp"

int main(void)
{
	{
		std::cout << "---> int <---" << std::endl;
		Array<int> first(5);

		try
		{
			for (unsigned int i = 0; i < first.size(); i++)
			{
				first[i] = i;
				std::cout << first[i] << " ";
			}

			std::cout << std::endl << "---------------------------"
					  << std::endl;
			std::cout << first[2] << std::endl;
			std::cout << first[6] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << "---------------------------" << std::endl;

		{
			Array<int> second;

			second = first;
			try
			{
				second[2] = 42;
				std::cout << second[2] << std::endl;
				std::cout << first[2] << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}

		try
		{
			std::cout << first[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "---------------------------" << std::endl;

	{
		std::cout << "---> char <---" << std::endl;
		Array<char> first(7);
		char src[] = "Nastya";
		unsigned int i;

		try
		{
			for (i = 0; i < strlen(src); i++)
			{
				first[i] = src[i];
				std::cout << first[i];
			}
			first[i] = src[i];

			std::cout << std::endl << "---------------------------"
					  << std::endl;
			std::cout << first[2] << std::endl;
			std::cout << first[-1] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << "---------------------------" << std::endl;

		{
			Array<char> second(first);

			try
			{
				second[0] = 'n';
				std::cout << second[0] << std::endl;
				std::cout << first[0] << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}

	return (0);
}
