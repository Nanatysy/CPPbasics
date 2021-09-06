#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "default (wrong)";
	std::cout << "Default wrong_animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "Copy wrong_animal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src) {
	if (this == &src)
		return (*this);
	this->setType(src.getType());
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "** default noises **" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::setType(const std::string &type)
{
	WrongAnimal::type = type;
}
