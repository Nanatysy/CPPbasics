#ifndef CPP01_WEAPON_H
#define CPP01_WEAPON_H

#include <string>

class Weapon
{
private:
	std::string _type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	void setType(const std::string &type);
	const std::string &getType() const;

};


#endif //CPP01_WEAPON_H
