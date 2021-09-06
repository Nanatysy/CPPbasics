#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->setName("default FragTrap player");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Neu level: Welcome, " << this->getName() << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "Neu level: Welcome, " << this->getName() << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	std::cout << "Neu level: Cloning... Welcome, " << this->getName() << std::endl;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " is dead, back to the level 1" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->getName() << " wants to give you a highfive" << std::endl;
	return ;
}