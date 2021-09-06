#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor" << std::endl;
	_name = "Nastya";
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << "Character parameterized constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const Character &src)
{
	std::cout << "Character copy constructor" << std::endl;
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];

	std::cout << "Character destructor" << std::endl;
}

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	int i;

	for (i = 0; i < 4; i++) // check for uniqueness
	{
		if (_inventory[i])
		{
			if (_inventory[i] == m)
			{
				std::cout << _name << " already have this materia" << std::endl;
				return ;
			}
		}
	}

	i = 0;

	while (i < 4 && _inventory[i]) // looking for an empty slot
		i++;

	if (i == 4)
	{
		std::cout << "Inventory is already full" << std::endl;
		return ;
	}

	if (m->getType() != "ice" && m->getType() != "cure")
	{
		std::cout << "?" << std::endl;
		return ;
	}

	_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

Character &Character::operator=(const Character &src)
{
	if (this == &src)
		return (*this);

	_name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (src._inventory[i] != nullptr)
			_inventory[i] = src._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}

	return (*this);
}

