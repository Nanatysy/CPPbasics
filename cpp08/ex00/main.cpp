//
// Created by Debby Willette on 9/8/21.
//

#include "easyfind.h"
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>

void print(int elem)
{
	std::cout << elem << " ";
}

int main(void)
{
	std::cout << "\x1b[31m----> vector test <----\x1b[0m" << std::endl << std::endl;
	{
		std::vector<int> test;

		test.push_back(1);
		test.push_back(2);
		test.push_back(3);
		test.push_back(2);
		test.push_back(4);

		std::cout << "Full vector: ";
		std::for_each(test.begin(), test.end(), print);
		std::cout << std::endl;
		try
		{
			std::vector<int>::iterator tmp = easyfind(test, 2);
			std::cout << "Vector from first occurrence of 2: ";
			std::for_each(tmp, test.end(), print);
			std::cout << std::endl;
		}
		catch (std::exception &__unused e)
		{
			std::cout << "Fail, vector doesn't contain value 2" << std::endl;
		}

		std::cout << "-----------------------" << std::endl;

		std::cout << "Full vector: ";
		std::for_each(test.begin(), test.end(), print);
		std::cout << std::endl;
		try
		{
			std::vector<int>::iterator tmp = easyfind(test, 9);
			std::cout << "Vector from first occurrence of 9: ";
			std::for_each(tmp, test.end(), print);
			std::cout << std::endl;
		}
		catch (std::exception &__unused e)
		{
			std::cout << "Fail, vector doesn't contain value 9" << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "\x1b[32m----> list test <----\x1b[0m" << std::endl <<
	std::endl;
	{
		std::list<int> test;

		for (int i = 10; i < 100; i += 10)
		{
			if (i / 10 % 2 == 0)
				test.push_back(i);
			else
				test.push_front(i);
		}
		std::cout << "Full list: ";
		std::for_each(test.begin(), test.end(), print);
		std::cout << std::endl;
		try
		{
			std::list<int>::iterator tmp = easyfind(test, 10);
			std::cout << "List from first occurrence of 10: ";
			std::for_each(tmp, test.end(), print);
			std::cout << std::endl;
		}
		catch (std::exception &__unused e)
		{
			std::cout << "Fail, list doesn't contain value 10" << std::endl;
		}

		std::cout << "-----------------------" << std::endl;

		std::cout << "Full list: ";
		std::for_each(test.begin(), test.end(), print);
		std::cout << std::endl;
		try
		{
			std::list<int>::iterator tmp = easyfind(test, 9);
			std::cout << "List from first occurrence of 9: ";
			std::for_each(tmp, test.end(), print);
			std::cout << std::endl;
		}
		catch (std::exception &__unused e)
		{
			std::cout << "Fail, list doesn't contain value 9" << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "\x1b[33m----> map test <----\x1b[0m" << std::endl <<
	std::endl;
	{
//		std::map<std::string, int> test;
//		std::string dictionary[5] = {"first", "second", "third", "forth",
//									 "fifth"};
//
//		for (int i = 0; i < 5; i++)
//			test.insert(std::pair<std::string, int>(dictionary[i], i + 1));

//		std::cout << test["third"];

//		std::cout << "Full list: ";
//		std::for_each(test.begin(), test.end(), print);
//		std::cout << std::endl;
//		try
//		{
//			std::map<std::string, int>::iterator tmp = easyfind(test, 2);
//			std::cout << "List from first occurrence of 10: ";
//			std::for_each(tmp, test.end(), print);
//			std::cout << std::endl;
//		}
//		catch (std::exception &__unused e)
//		{
//			std::cout << "Fail, list doesn't contain value 10" << std::endl;
//		}
//
//		std::cout << "-----------------------" << std::endl;
//
//		std::cout << "Full list: ";
//		std::for_each(test.begin(), test.end(), print);
//		std::cout << std::endl;
//		try
//		{
//			std::map<std::string, int>::iterator tmp = easyfind(test, 10);
//			std::cout << "List from first occurrence of 9: ";
//			std::for_each(tmp, test.end(), print);
//			std::cout << std::endl;
//		}
//		catch (std::exception &__unused e)
//		{
//			std::cout << "Fail, list doesn't contain value 9" << std::endl;
//		}

		{
			std::set<int> test;
			std::string dictionary[5] = {"first", "second", "third", "forth",
										 "fifth"};

			for (int i = 0; i < 5; i++)
				test.insert(i * 10);

			std::cout << "Full list: ";
			std::for_each(test.begin(), test.end(), print);
			std::cout << std::endl;
			try
			{
				std::set<int>::iterator tmp = easyfind(test, 10);
				std::cout << "List from first occurrence of 10: ";
				std::for_each(tmp, test.end(), print);
				std::cout << std::endl;
			}
			catch (std::exception &__unused e)
			{
				std::cout << "Fail, list doesn't contain value 10" << std::endl;
			}
		}
	}

	return (0);
}