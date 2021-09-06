#ifndef CPP04_WRONGANIMAL_H
#define CPP04_WRONGANIMAL_H

#include "iostream"

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & src);
	~WrongAnimal();

	WrongAnimal & operator=(WrongAnimal const & src);

	void setType(const std::string &type);
	const std::string &getType() const;

	void makeSound(void) const;

};


#endif //CPP04_WRONGANIMAL_H
