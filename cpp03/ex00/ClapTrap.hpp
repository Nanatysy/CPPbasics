#ifndef CPP03_CLAPTRAP_H
#define CPP03_CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap {

private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	const std::string &getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	void setName(const std::string &name);
	void setHitPoints(int hitPoints);
	void setEnergyPoints(int energyPoints);
	void setAttackDamage(int attackDamage);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap & operator=(ClapTrap const & src);
};


#endif //CPP03_CLAPTRAP_H
