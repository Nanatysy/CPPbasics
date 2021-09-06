#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap first;
	std::cout << "---------------------" <<std::endl;
	DiamondTrap second("Nastya");
	std::cout << "---------------------" <<std::endl;
	DiamondTrap third;
	std::cout << "---------------------" <<std::endl;


	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());
	second.highFivesGuys();
	second.guardGate();

	third = second;
	third.guardGate();
	first.attack(second.getName());
	second.beRepaired(100);
	second.attack(third.getName());
	third.takeDamage(second.getAttackDamage());
	third.beRepaired(5);
	third.takeDamage(150);

	second.whoAmI();
	std::cout << "---------------------" <<std::endl;
	return (0);
}