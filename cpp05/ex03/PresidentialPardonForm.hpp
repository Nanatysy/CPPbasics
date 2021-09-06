#ifndef CPP05_PRESIDENTIALPARDONFORM_HPP
#define CPP05_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm & src);
	virtual ~PresidentialPardonForm();

	const std::string &getTarget() const;

	PresidentialPardonForm & operator=(PresidentialPardonForm const & src);

	void execute(Bureaucrat const & src) const;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_HPP
