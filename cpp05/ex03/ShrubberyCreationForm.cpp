#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
		Form("ShrubberyCreationForm", 145, 147), _target("default")
{
	std::cout << this->getName() << " default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
		:  Form("ShrubberyCreationForm", 145, 147), _target(target)
{
	std::cout << this->getName() << " parameterized constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(
		const ShrubberyCreationForm &src) : Form(src.getName(), src
		.getReqGradeToSign(),src.getReqGradeToExec()), _target(src.getTarget())
{
	std::cout << src.getName() << " copy constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " destructor" << std::endl;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this == &src)
		return (*this);

	_target = src.getTarget();
	return (*this);
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &src) const
{
	std::ofstream ofs;
	std::string tmp;

	if (!this->isState())
		throw Form::IsntSigned();
	if (src.getGrade() > this->getReqGradeToExec())
		throw Form::GradeTooLowException();
	tmp = _target + "_shrubbery";
	ofs.open(tmp);
	if (!ofs.is_open())
		throw FileException();
	for (int i = 0; i < 15; i++)
	{
		if (i < 9)
		{
			for (int j = 0; j < 11 - i; j++)
				ofs << " ";
			for (int j = 0; j < 1 + 2 * i; j++)
				ofs << "*";
			ofs << std::endl;
		}
		else
			ofs << "          ---" << std::endl;
	}
	ofs.close();
}