//
// Created by Debby Willette on 9/7/21.
//

#ifndef CPP06_ITER_HPP
#define CPP06_ITER_HPP

#include <iostream>

template <typename T1>
void iter(T1* array, int length, void (*f)(const T1 &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T1>
void iter(T1* array, int length, void (*f)(T1 &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

#endif //CPP06_ITER_HPP
