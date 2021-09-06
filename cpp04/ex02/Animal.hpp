#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(const Animal & src);
	virtual ~Animal();

	Animal & operator=(Animal const & src);

	void setType(const std::string &type);
	const std::string &getType() const;

	virtual void makeSound(void) const = 0;

	virtual void printIdeas(void) const = 0;

	virtual void addIdea(std::string const & arg) = 0;

};


#endif //CPP04_ANIMAL_H
