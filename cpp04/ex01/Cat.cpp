#include "Cat.hpp"

Cat::Cat()
{
	this->setType("cat");
	this->_brain = new Brain;
	std::cout << "Default cat constructor" << std::endl;
}

Cat::Cat(const Cat & src)
{
	std::cout << "Copy cat constructor" << std::endl;

	_brain = new Brain(*src.getBrain());
	this->setType(src.getType());
}

Cat::~Cat()
{
	delete _brain;
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

	delete _brain;

	_brain = new Brain(*src.getBrain());
	this->setType(src.getType());
	return (*this);
}

Brain *Cat::getBrain() const
{
	return _brain;
}

void Cat::printIdeas(void) const
{
	const std::string *str = _brain->getIdeas();
	int	last = _brain->getNext();

	std::cout << "All ideas in the BRAIN:" << std::endl;
	for (int i = 0; i < last; i++)
		std::cout << str[i] << std::endl;
}

void Cat::addIdea(const std::string &arg)
{
	_brain->setIdea(arg);
}
