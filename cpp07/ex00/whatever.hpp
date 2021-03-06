//
// Created by Debby Willette on 9/7/21.
//

#ifndef CPP06_WHATEVER_HPP
#define CPP06_WHATEVER_HPP

#include <iostream>

template <typename T>
const T& max(const T & a, const T & b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
const T& min(const T & a, const T & b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
void swap(T & a, T & b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

#endif //CPP06_WHATEVER_HPP
