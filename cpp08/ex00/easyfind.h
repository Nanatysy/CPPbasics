//
// Created by Debby Willette on 9/8/21.
//

#ifndef CPP06_EASYFIND_H
#define CPP06_EASYFIND_H

#include <iostream>

template <typename T>
typename T::iterator easyfind(T & src, int needle)
{
	typename T::iterator it;

	it = std::find(src.begin(), src.end(), needle);
	if (it == std::end(src))
		throw std::exception();
	return (it);
}


#endif //CPP06_EASYFIND_H
