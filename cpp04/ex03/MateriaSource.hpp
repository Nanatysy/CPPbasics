#ifndef CPP04_MATERIASOURCE_HPP
#define CPP04_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_inventory[4];
	bool	_state[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria* src);
	virtual AMateria* createMateria(std::string const & type);

	MateriaSource & operator=(MateriaSource const & src);
};


#endif //CPP04_MATERIASOURCE_HPP
