//
// Created by Debby Willette on 9/7/21.
//

#include "Array.hpp"
#define MAX_VAL 750

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

	Array<std::string>(3);

	std::cout << "---------------------" << std::endl;
	std::cout << "checklist check" << std::endl;
	std::cout << "---------------------" << std::endl;

	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}

	return (0);
}
