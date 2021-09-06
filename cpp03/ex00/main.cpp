#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap first;
	ClapTrap second("Nastya");
	ClapTrap third(first);

	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	second.takeDamage(50);
	third.beRepaired(10);
	return (0);
}