#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default brain constructor" << std::endl;
	_ideas = new std::string[100];
	_ideas[0] = "Hello world";
	_next = 1;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy constructor" << std::endl;

	const std::string *tmp = src.getIdeas();
	_next = src.getNext();
	_ideas = new std::string[100];
	for (int j = 0; j < _next; j++)
		_ideas[j] = tmp[j];
}

Brain::~Brain() {
	delete [] _ideas;
	std::cout << "Brain destructor" << std::endl;
}

const std::string *Brain::getIdeas() const {
	return _ideas;
}

Brain &Brain::operator=(const Brain & src) {
	if (this == &src)
		return (*this);

	delete [] _ideas;

	const std::string *tmp = src.getIdeas();
	_next = src.getNext();
	_ideas = new std::string[100];
	for (int j = 0; j < _next; j++)
		_ideas[j] = tmp[j];
	return (*this);
}

int Brain::getNext() const
{
	return _next;
}

void Brain::setIdea(const std::string & arg)
{
	_ideas[_next++] = arg;
}


