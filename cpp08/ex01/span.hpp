//
// Created by Debby Willette on 9/10/21.
//

#ifndef CPP06_SPAN_HPP
#define CPP06_SPAN_HPP

#include <iostream>
#include <set>
#include <algorithm>

class Span
{
private:
	unsigned int	_size;
	std::multiset<int> _array;
	Span();

public:

	class TooManyNumbers : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Object already store max number of ints");
		}
	};

	class TooFewNumbers : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Object doesn't have enough number to find a span");
		}
	};

	Span(unsigned int size);
	Span(const Span & src);
	virtual ~Span();

	void addNumber(const int & new_num);
	template<class T>
	void addNumber(T first, T second);

	int shortestSpan(void) const;
	int longestSpan(void) const;

	void display(void) const;

	Span & operator=(Span const & src);
};

template<class T>
void Span::addNumber(T first, T second)
{
	_array.insert(first, second);
}

#endif //CPP06_SPAN_HPP
