#include "Weapon.hpp"

Weapon::Weapon() {
	return ;
}

Weapon::Weapon(std::string type) : _type(type) {
	return ;
};


Weapon::~Weapon() {
	return ;
}

void Weapon::setType(const std::string &type) {
	_type = type;
}

const std::string &Weapon::getType() const {
	return _type;
}
