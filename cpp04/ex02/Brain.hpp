#ifndef CPP04_BRAIN_HPP
#define CPP04_BRAIN_HPP

#include <string>
#include <iostream>

class Brain {

private:
	std::string *_ideas;
	int			_next;

public:
	Brain();
	Brain(Brain const & src);
	virtual ~Brain();

	Brain & operator=(Brain const & src);

	const std::string *getIdeas() const;

	void	setIdea(const std::string & arg);

	int getNext() const;

};


#endif //CPP04_BRAIN_HPP
