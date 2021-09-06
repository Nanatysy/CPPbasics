//
// Created by Nastya on 03.09.2021.
//

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor" << std::endl;
	_ref[0] = "shrubberycreation request";
	_ref[1] = "robotomy request";
	_ref[2] = "presidentialpardon request";
	f[0] = &Intern::makeShrubbery;
	f[1] = &Intern::makeRobotomy;
	f[2] = &Intern::makePresident;
}

Intern::Intern(const Intern &src) {
	*this = src;
	std::cout << "Intern copy constructor" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor" << std::endl;
}

Intern &Intern::operator=(const Intern &src) {
	if (this == &src)
		return (*this);
	_ref[0] = src._ref[0];
	_ref[1] = src._ref[1];
	_ref[2] = src._ref[2];
	f[0] = src.f[0];
	f[1] = src.f[1];
	f[2] = src.f[2];
	return (*this);
}

Form *Intern::makeForm(std::string const &name, std::string const &target) {
	int	i;

	i = 0;
	while (i < 3 && name != _ref[i])
		i++;
	if (i != 3)
		return ((this->*f[i])(target));
	else
		std::cout << "No such form, you dumb" << std::endl;
	return (nullptr);
}

Form *Intern::makeShrubbery(std::string const &target) {
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomy(std::string const &target) {
	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresident(std::string const &target) {
	return (new PresidentialPardonForm(target));
}


