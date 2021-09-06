#include "Cat.hpp"

Cat::Cat()
{
	this->setType("cat");
	std::cout << "Default cat constructor" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src)
{
	std::cout << "Copy cat constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "** MEOW **" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this == &src)
		return (*this);
	this->setType(src.getType());
	return (*this);
}
