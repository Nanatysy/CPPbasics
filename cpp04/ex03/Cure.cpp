#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const AMateria &src) : AMateria(src)
{
	std::cout << "Cure copy constructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
	if (this == &src)
		return (*this);

	_type = src.getType();
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *res = new Cure(*this);
	return (res);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" <<
	std::endl;
}
