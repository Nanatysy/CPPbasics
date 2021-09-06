#ifndef CPP03_FRAGCLAP_H
#define CPP03_FRAGCLAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap();
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & src);
	~FragTrap();

	FragTrap & operator=(FragTrap const & src);

	void highFivesGuys(void);
};


#endif //CPP03_FRAGCLAP_H
