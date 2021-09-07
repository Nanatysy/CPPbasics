//
// Created by Debby Willette on 9/6/21.
//

#include <stdint.h>
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data	first;
	Data	second;

	first.a = 42;
	first.b = 4.2;
	first.c = 42;

	uintptr_t tmp = serialize(&first);
	second = *(deserialize(tmp));

	std::cout << "reference: " << first.a << ", result: " << second.a <<
	std::endl;
	std::cout << "reference: " << first.b << ", result: " << second.b <<
			  std::endl;
	std::cout << "reference: " << first.c << ", result: " << second.c <<
			  std::endl;
	return (0);
}