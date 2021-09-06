#ifndef CPP03_DIAMONDTRAP_H
#define CPP03_DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {

private:
	std::string _name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();

	DiamondTrap & operator=(DiamondTrap const & src);

	void attack(std::string const & target);

	void whoAmI();

	const std::string &getName() const;

	void setName(const std::string &newName);
};


#endif //CPP03_DIAMONDTRAP_H
