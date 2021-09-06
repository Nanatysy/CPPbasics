#include "Dog.hpp"

Dog::Dog()
{
	this->setType("dog");
	_brain = new Brain;
	std::cout << "Default dog constructor" << std::endl;
}

Dog::Dog(const Dog & src)
{
	std::cout << "Copy dog constructor" << std::endl;

	_brain = new Brain(*src.getBrain());
	this->setType(src.getType());
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "** WOOF **" << std::endl;
}

Brain *Dog::getBrain() const
{
	return _brain;
}

void Dog::printIdeas(void) const
{
	const std::string *str = _brain->getIdeas();
	int	last = _brain->getNext();

	std::cout << "All ideas in the BRAIN:" << std::endl;
	for (int i = 0; i < last; i++)
		std::cout << str[i++] << std::endl;
}

void Dog::addIdea(const std::string &arg)
{
	_brain->setIdea(arg);
}

Dog &Dog::operator=(const Dog &src)
{
	if (this == &src)
		return (*this);

	delete _brain;

	_brain = new Brain(*src.getBrain());
	this->setType(src.getType());
	return (*this);
}