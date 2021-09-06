#ifndef CPP02_ZOMBIE_H
#define CPP02_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{

private:
	std::string _name;

public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void announce(void);
};

#endif //CPP02_ZOMBIE_H
