#ifndef CPP04_CURE_HPP
#define CPP04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const AMateria &src);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

	Cure & operator=(Cure const & src);
};


#endif //CPP04_CURE_HPP
