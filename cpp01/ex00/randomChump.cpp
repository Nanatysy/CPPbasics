#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump( std::string name ) {
	Zombie *new_z;
	static int i;

	if (i % 2)
	{
		std::cout << "Heap: ";
		new_z = newZombie(name);
		new_z->announce();
		delete new_z;
	}
	else
	{
		std::cout << "Stack: ";
		Zombie new_z_stack(name);
		new_z_stack.announce();
	}
	i++;
}