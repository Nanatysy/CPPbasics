#include "AMateria.hpp"

AMateria::AMateria(void)
{
	_type = "***";
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout << "AMateria parameterized constructor" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
	std::cout << "AMateria copy constructor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << "is dumb" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	if (this == &src)
		return (*this);

	_type = src.getType();
	return (*this);
}
