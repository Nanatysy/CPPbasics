#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const AMateria &src) : AMateria(src)
{
	std::cout << "Ice copy constructor" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
	if (this == &src)
		return (*this);

	_type = src.getType();
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *res = new Ice(*this);
	return (res);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
	std::endl;
}
