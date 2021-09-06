#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog & src);
	~Dog();

	void makeSound(void) const;

	Dog & operator=(const Dog &src);
};


#endif //CPP04_DOG_HPP
