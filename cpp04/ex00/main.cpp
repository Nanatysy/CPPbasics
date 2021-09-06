#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();

	std::cout << "--------> Animal <--------" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound();
	i->makeSound();
	meta->makeSound();

	std::cout << "--------> Wrong animal <--------" << std::endl;

	std::cout << wrong_i->getType() << std::endl;

	wrong_i->makeSound();
	wrong_meta->makeSound();

	std::cout << "-------------------" << std::endl;

	delete j;
	delete i;
	delete meta;

	delete wrong_i;
	delete wrong_meta;

	return (0);
}