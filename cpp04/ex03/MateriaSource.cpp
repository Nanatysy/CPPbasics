#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor" << std::endl;

	for (int i = 0; i < 4; i ++)
		_state[i] = true;

	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_state[i])
			delete _inventory[i];
	}

	std::cout << "MateriaSource destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria* src)
{
	int	i = 0;

	while (i < 4 && _inventory[i] != nullptr) // looking for an empty slot
		i++;

	if (i == 4)
	{
		std::cout << "inventory is full" << std::endl;
		return ;
	}

	for (int j = 0; j < 4; j++)
	{
		if (_inventory[j] && _inventory[j] == src)
			_state[i] = false;
	}

	_inventory[i] = src;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (nullptr);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	if (this == &src)
		return (*this);

	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i]->clone();
	for (int i = 0; i < 4; i++)
		_state[i] = true;
	return (*this);
}


