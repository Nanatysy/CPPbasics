#ifndef CPP03_SCAVTRAP_H
#define CPP03_SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {

private:
	bool _home;

public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & src);

	bool isHome() const;
	void setHome(bool home);

	void attack(std::string const & target);
	void guardGate(void);
};


#endif //CPP03_SCAVTRAP_H
