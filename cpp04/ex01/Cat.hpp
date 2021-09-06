#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:  public Animal
{
private:
	Brain *_brain;

public:
	Cat();
	Cat(const Cat & src);
	~Cat();

	void makeSound(void) const;

	Brain *getBrain() const;

	void printIdeas(void) const ;

	void addIdea(std::string const & arg);

	Cat & operator=(Cat const & src);
};


#endif //CPP04_CAT_HPP
