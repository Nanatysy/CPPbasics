#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout << this->getName() << " default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
		:  Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << this->getName() << " parameterized constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &src) : Form(src.getName(), src
		.getReqGradeToSign(),src.getReqGradeToExec()), _target(src.getTarget())
{
	std::cout << src.getName() << " copy constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << " destructor" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this == &src)
		return (*this);

	_target = src.getTarget();
	return (*this);
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &src) const
{
	if (!this->isState())
		throw Form::IsntSigned();
	if (src.getGrade() > this->getReqGradeToExec())
		throw Form::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" <<
	std::endl;
}




