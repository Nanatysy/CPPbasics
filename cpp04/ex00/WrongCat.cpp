#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->setType("wrong cat");
	std::cout << "Default wrong_cat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src)
{
	std::cout << "Copy wrong_cat constructor" << std::endl;

}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "** MEOW **" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this == &src)
		return (*this);
	this->setType(src.getType());
	return (*this);
}