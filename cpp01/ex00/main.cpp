#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void randomChump( std::string name );

int main(void)
{
	randomChump("Nastya");
	randomChump("Nastya2");
	randomChump("Nastya3");
	randomChump("Nastya4");

	return (0);
}