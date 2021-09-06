#include "Animal.hpp"

Animal::Animal()
{
	this->type = "default";
	std::cout << "Default animal constructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Copy animal constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

Animal & Animal::operator=(Animal const & src) {
	if (this == &src)
		return (*this);

	this->setType(src.getType());
	return (*this);
}

const std::string &Animal::getType() const
{
	return type;
}

void Animal::setType(const std::string &type)
{
	Animal::type = type;
}
