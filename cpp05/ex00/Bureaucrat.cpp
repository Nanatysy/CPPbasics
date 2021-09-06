#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("defBUREAUCRAT"), _grade(150)
{
	std::cout << "Default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name) : _name(name), _grade(75)
{
	std::cout << "1 parameterized constructor" << std::endl;

}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	std::cout << "2 parameterized constructor" << std::endl;
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _name << " destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	std::cout << "Copy constructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this == &src)
		return (*this);
	this->setGrade(src.getGrade());
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

void Bureaucrat::incGrade(void)
{
	this->setGrade(this->getGrade() - 1);
}

void Bureaucrat::decGrade(void)
{
	this->setGrade(this->getGrade() + 1);
}

std::ostream & operator<<(std::ostream & out, Bureaucrat const & src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade() <<
	std::endl;
	return out;
}
