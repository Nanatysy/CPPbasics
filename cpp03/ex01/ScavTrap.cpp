#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _home(false) {
	this->setName("default ScavTrap player");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "New level: Welcome, " << this->getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string &name) : _home(false) {
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "New level: Welcome, " << this->getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	this->_home = src.isHome();
	std::cout << "New level: Cloning... Welcome, " << this->getName() << std::endl;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " is dead, back to the level 1" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergyPoints(src.getEnergyPoints());
	this->setAttackDamage(src.getAttackDamage());
	this->_home = src.isHome();
	return (*this);
}


bool ScavTrap::isHome() const {
	return _home;
}

void ScavTrap::setHome(bool home) {
	_home = home;
}

void ScavTrap::attack(std::string const & target) {
	int tmp = this->getEnergyPoints();

	if (tmp > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing ";
		std::cout << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(--tmp);
	}
	else
	{
		std::cout << "ClapTrap " << this->getName() << "needs a little bit of time to rest before he/she can attack ";
		std::cout << target << std::endl;
	}
	return ;
}

void ScavTrap::guardGate(void) {
	if (!_home)
	{
		std::cout << "ScavTrap " << this->getName() << " have entered in Gate keeper mode" << std::endl;
		_home = true;
	}
	else
		std::cout << "hmmm, " << this->getName() << " is already in a Gate keeper mode" << std::endl;

}
