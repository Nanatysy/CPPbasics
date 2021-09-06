#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("default DiamondTrap player") {
	this->ClapTrap::setName("default DiamondTrap player (+_clap_name)");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "Nou level: Welcome, " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	this->ClapTrap::setName(name + "_clap_name");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "Nou level: Welcome, " << _name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;
	std::cout << "Nou level: Cloning... Welcome, " << _name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: " << _name << " is dead" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	this->setName(src.getName());
	this->ClapTrap::setName(src.ClapTrap::getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	this->setHome(src.isHome());
	return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap: " << _name << ", ClapTrap: " <<
	this->ClapTrap::getName() << std::endl;
}

const std::string &DiamondTrap::getName() const
{
	return _name;
}

void DiamondTrap::setName(const std::string &newName)
{
	_name = newName;
}

