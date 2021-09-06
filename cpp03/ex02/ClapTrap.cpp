#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default player"){
	std::cout << "Welcome, " << _name << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string const & name) : _name(name) {
	std::cout << "Welcome, " << _name << std::endl;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "Cloning... Welcome, " << src.getName() << std::endl;
	this->_name = src.getName();
	this->_hit_points = src.getHitPoints();
	this->_energy_points = src.getEnergyPoints();
	this->_attack_damage = src.getAttackDamage();
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " is dead(" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	this->_name = src.getName();
	this->_hit_points = src.getHitPoints();
	this->_energy_points = src.getEnergyPoints();
	this->_attack_damage = src.getAttackDamage();
	return (*this);
}

const std::string &ClapTrap::getName() const {
	return _name;
}

int ClapTrap::getHitPoints() const {
	return _hit_points;
}

int ClapTrap::getEnergyPoints() const {
	return _energy_points;
}

int ClapTrap::getAttackDamage() const {
	return _attack_damage;
}

void ClapTrap::attack(std::string const & target) {
	if (_energy_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
		std::cout << _attack_damage << " points of damage!" << std::endl;
		_energy_points--;
	}
	else
	{
		std::cout << "ClapTrap " << _name << "needs a little bit of time to rest before he/she can attack ";
		std::cout << target << std::endl;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage." << std::endl;
	if (_hit_points < (int)amount)
	{
		std::cout << _name << " is dead" << std::endl;
		_hit_points = 0;
	}
	else
		_hit_points -= (int)amount;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " getting healed" << std::endl;
	_hit_points += amount;
	return ;
}

void ClapTrap::setName(const std::string &name) {
	_name = name;
}

void ClapTrap::setHitPoints(int hitPoints) {
	_hit_points = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
	_energy_points = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	_attack_damage = attackDamage;
}
