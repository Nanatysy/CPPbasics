#ifndef CPP01_HUMANB_H
#define CPP01_HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack() const;
};


#endif //CPP01_HUMANB_H
