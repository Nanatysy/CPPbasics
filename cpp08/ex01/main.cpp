//
// Created by Debby Willette on 9/8/21.
//

#include <vector>
#include "span.hpp"

int main(void)
{

	std::cout << "\x1b[34m----> main test <----\x1b[0m" << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.display();

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "\x1b[34m----> extra tests <----\x1b[0m" << std::endl;

	std::cout << "Test for max numbers in an object" << std::endl;
	{
		try
		{
			Span sp = Span(2);

			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
		}
		catch (std::exception & e)
		{
			std::cout << "\x1b[31m";
			std::cout << e.what() << std::endl;
			std::cout << "\x1b[0m";
		}
	}

	std::cout << "Test for too few numbers in an object" << std::endl;
	{
		try
		{
			Span sp = Span(2);

			sp.addNumber(5);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "\x1b[31m";
			std::cout << e.what() << std::endl;
			std::cout << "\x1b[0m";
		}
	}

	std::cout << "Test for too few numbers in an object" << std::endl;
	{
		try
		{
			Span sp = Span(2);

			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "\x1b[31m";
			std::cout << e.what() << std::endl;
			std::cout << "\x1b[0m";
		}
	}

	std::cout << "Test for big capacity" << std::endl;
	{
		try
		{
			Span sp = Span(13000);

			for (int i= 0; i < 13000; i++)
				sp.addNumber(i);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;

			Span fail_sp(sp);
			fail_sp.addNumber(7);
		}
		catch (std::exception & e)
		{
			std::cout << "\x1b[31m";
			std::cout << e.what() << std::endl;
			std::cout << "\x1b[0m";
		}
	}

	std::cout << "Test for big capacity" << std::endl;
	{
		try
		{
			Span sp = Span(10);
			std::vector<int> src(6);

			for (int i = 0; i < 6; i++)
				src[i] = i * 3;

			sp.addNumber(src.begin(), src.end());
			sp.display();

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;

			sp.addNumber(src.begin(), src.end());
		}
		catch (std::exception & e)
		{
			std::cout << "\x1b[31m";
			std::cout << e.what() << std::endl;
			std::cout << "\x1b[0m";
		}
	}

	return (0);
}