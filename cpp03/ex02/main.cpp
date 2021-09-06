#include "FragTrap.hpp"

int main(void)
{
	ClapTrap first("Nastya");
	FragTrap second;
	FragTrap third("FragNastya");

	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());
	third.highFivesGuys();

	second = third;
	second.highFivesGuys();
	first.attack(second.getName());
	second.beRepaired(100);
	second.attack(third.getName());
	third.takeDamage(second.getAttackDamage());
	third.beRepaired(5);
	third.takeDamage(150);

	return (0);
}