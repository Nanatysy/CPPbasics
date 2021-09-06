#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
		Form("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << this->getName() << " default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
		:  Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << this->getName() << " parameterized constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(
		const RobotomyRequestForm &src) : Form(src.getName(), src
		.getReqGradeToSign(),src.getReqGradeToExec()), _target(src.getTarget())
{
	std::cout << src.getName() << " copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->getName() << " destructor" << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this == &src)
		return (*this);

	_target = src.getTarget();
	return (*this);
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat &src) const
{
	if (!this->isState())
		throw Form::IsntSigned();
	if (src.getGrade() > this->getReqGradeToExec())
		throw Form::GradeTooLowException();
	std::cout << "*** drilling noises ***" << std::endl;
	if (_psevdo_random % 2 == 0)
		std::cout << _target << " has been robotomized successfully" <<
		std::endl;
	else
		std::cout << "Fail( " << _target << " isn't robotomized" << std::endl;
	_psevdo_random++;
}

int RobotomyRequestForm::_psevdo_random = 0;