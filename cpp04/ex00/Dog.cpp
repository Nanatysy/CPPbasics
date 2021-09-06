#include "Dog.hpp"

Dog::Dog()
{
	this->setType("dog");
	std::cout << "Default dog constructor" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src)
{
	std::cout << "Copy dog constructor" << std::endl;

}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "** WOOF **" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this == &src)
		return (*this);
	this->setType(src.getType());
	return (*this);
}