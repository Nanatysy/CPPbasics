//
// Created by Debby Willette on 9/7/21.
//

#include <iostream>
#include <ctime>
#include <unistd.h>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	static int i;

	i++;
	if (i % 3 == 0)
		return (new A());
	else if (i % 3 == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	A *first;
	B *second;
	C *third;

	std::cout << "Pointer identify: ";

	first = dynamic_cast<A*>(p);
	if (first != nullptr)
	{
		std::cout << "It's a class A" << std::endl;
		return ;
	}

	second = dynamic_cast<B*>(p);
	if (second != nullptr)
	{
		std::cout << "It's a class B" << std::endl;
		return ;
	}

	third = dynamic_cast<C*>(p);
	if (third != nullptr)
	{
		std::cout << "It's a class C" << std::endl;
		return ;
	}
}

void identify(Base& p)
{
	std::cout << "Reference identify: ";

	try
	{
		__unused A &first = dynamic_cast<A&>(p);
		std::cout << "It's a class A" << std::endl;
	}
	catch (std::bad_cast) {}

	try
	{
		__unused B &first = dynamic_cast<B&>(p);
		std::cout << "It's a class B" << std::endl;
	}
	catch (std::bad_cast) {}

	try
	{
		__unused C &first = dynamic_cast<C&>(p);
		std::cout << "It's a class C" << std::endl;
	}
	catch (std::bad_cast) {}
}

int main(void)
{
	Base	*ptr;

	while (1)
	{
		ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete ptr;
		sleep(1);
	}
	return (0);
}