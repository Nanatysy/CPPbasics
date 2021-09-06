#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria	*_inventory[4];

public:
	Character();
	Character(const std::string &name);
	Character(Character const & src);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	Character & operator=(Character const & src);
};


#endif //CPP04_CHARACTER_HPP
