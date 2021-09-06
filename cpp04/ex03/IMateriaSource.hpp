#ifndef CPP04_IMATERIASOURCE_HPP
#define CPP04_IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include <string>
#include <iostream>

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* src) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //CPP04_IMATERIASOURCE_HPP
