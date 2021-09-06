#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap first("Nastya");
	ScavTrap second;
	ScavTrap third("ScavNastya");

	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());
	third.guardGate();

	second = third;
	second.guardGate();
	first.attack(second.getName());
	second.beRepaired(100);
	second.attack(third.getName());
	third.takeDamage(second.getAttackDamage());
	third.beRepaired(5);
	third.takeDamage(150);

	return (0);
}