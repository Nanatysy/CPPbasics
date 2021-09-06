#ifndef CPP04_ICE_HPP
#define CPP04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(const AMateria &src);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	Ice & operator=(Ice const & src);
};


#endif //CPP04_ICE_HPP
