#ifndef CPP04_CAT_HPP
#define CPP04_CAT_HPP

#include "Animal.hpp"

class Cat:  public Animal
{
public:
	Cat();
	Cat(const Cat & src);
	~Cat();

	void makeSound(void) const;

	Cat & operator=(Cat const & src);
};


#endif //CPP04_CAT_HPP
