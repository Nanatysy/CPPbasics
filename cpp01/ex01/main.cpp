#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie *tmp;

	tmp = zombieHorde(5, "Nastya");

	std::cout << "--------------------------" << std::endl;
	for (int i = 0; i < 5; i++)
		tmp[i].announce();

	delete [] tmp;
	return (0);
}