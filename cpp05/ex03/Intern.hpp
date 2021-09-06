//
// Created by Nastya on 03.09.2021.
//

#ifndef CPP05_INTERN_HPP
#define CPP05_INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern {
private:
	std::string _ref[3];
	Form* (Intern::*f[3])(std::string const &);

public:
	Intern();
	Intern(Intern const & src);
	virtual ~Intern();

	Intern & operator=(Intern const & src);
	Form *makeForm(std::string const & name, std::string const & target);
	Form *makeShrubbery(std::string const & target);
	Form *makeRobotomy(std::string const & target);
	Form *makePresident(std::string const & target);

};


#endif //CPP05_INTERN_HPP
