//
// Created by Debby Willette on 9/10/21.
//

#include "span.hpp"

Span::Span()
{}

Span::Span(unsigned int size) : _size(size)
{}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span()
{
	_array.clear();
}

void Span::addNumber(const int & new_num)
{
	if (_array.size() == _size)
		throw Span::TooManyNumbers();
	_array.insert(new_num);
}

int Span::shortestSpan(void) const
{
	int first;
	int min = INT_MAX;
	std::multiset<int>::iterator it;

	if (_array.empty() || _array.size() == 1)
		throw Span::TooFewNumbers();
	it = _array.begin();
	first = *it;
	++it;
	for ( ; it != _array.end(); ++it)
	{
		if (*it - first < min)
			min = *it - first;
		first = *it;
	}
	return (min);
}

int Span::longestSpan(void) const
{
	if (_array.empty() || _array.size() == 1)
		throw Span::TooFewNumbers();
	return (*(--_array.end()) - *(_array.begin()));
}

Span &Span::operator=(const Span &src)
{
	if (this == &src)
		return (*this);

	this->_array = src._array;
	this->_size = src._size;
	return (*this);
}

void Span::display(void) const
{
	std::multiset<int>::iterator it;


	for (it = _array.begin() ; it != _array.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

