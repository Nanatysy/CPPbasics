#ifndef CPP04_DOG_HPP
#define CPP04_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *_brain;

public:
	Dog();
	Dog(const Dog & src);
	~Dog();

	void makeSound(void) const;

	Brain *getBrain() const;

	void printIdeas(void) const ;

	void addIdea(std::string const & arg);

	Dog & operator=(Dog const & src);
};


#endif //CPP04_DOG_HPP
