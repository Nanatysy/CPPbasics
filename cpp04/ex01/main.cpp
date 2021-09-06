#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	Cat	kitty;
	Cat	s_kitty;

	std::cout << "-------------------" << std::endl;

	kitty.printIdeas();
	kitty.addIdea("I hate human");
	kitty.printIdeas();

	std::cout << "-------------------" << std::endl;

	s_kitty = kitty;

	std::cout << "-------------------" << std::endl;

	s_kitty.printIdeas();
	s_kitty.addIdea("I like food");
	s_kitty.printIdeas();
	kitty.printIdeas();

	std::cout << "-------------------" << std::endl;

	{
		Cat	t_kitty(kitty);

		std::cout << "----------*---------" << std::endl;
		t_kitty.printIdeas();
		std::cout << "----------*---------" << std::endl;
	}

	std::cout << "-------------------" << std::endl;

	kitty.printIdeas();

	std::cout << "--------> Subject tests <--------" << std::endl;

	Animal **array = new Animal*[6];

	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}

	array[1]->makeSound();
	array[2]->makeSound();

	array[3]->printIdeas();

	for (int i = 0; i < 6; i++)
		delete array[i];

	std::cout << "-------------------" << std::endl;

	return (0);
}