#include "Form.hpp"

Form::Form() : _name("defPaper"), _req_grade_to_sign(100), _req_grade_to_exec
(75), _state(false)
{
	std::cout << _name << " default constructor" << std::endl;
}

Form::Form(const std::string &name) : _name(name), _req_grade_to_sign(100),
_req_grade_to_exec(75), _state(false)
{
	std::cout << _name << " 1 parameterized constructor" << std::endl;
}

Form::Form(const std::string &name, const int reqGradeToSign,
		   const int reqGradeToExec) : _name(name), _req_grade_to_sign
		   (reqGradeToSign), _req_grade_to_exec(reqGradeToExec), _state(false)
{
	if (reqGradeToSign < 1 || reqGradeToExec < 1)
		throw Form::GradeTooHighException();
	if (reqGradeToSign > 150 || reqGradeToExec > 150)
		throw Form::GradeTooLowException();
	std::cout << _name << " 3 parameterized constructor" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor" << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _req_grade_to_sign(src
.getReqGradeToSign()), _req_grade_to_exec(src.getReqGradeToExec()), _state
(false)
{
	std::cout << _name << " copy constructor" << std::endl;
}

const std::string &Form::getName() const
{
	return _name;
}

int Form::getReqGradeToSign() const
{
	return _req_grade_to_sign;
}

int Form::getReqGradeToExec() const
{
	return _req_grade_to_exec;
}

bool Form::isState() const
{
	return _state;
}

Form &Form::operator=(const Form &src)
{
	if (this == &src)
		return (*this);

	_state = src.isState();
	return (*this);
}

void Form::beSigned(Bureaucrat const & src)
{
	if (src.getGrade() > _req_grade_to_sign)
		throw Form::GradeTooLowException();
	_state = true;
}

std::ostream & operator<<(std::ostream & out, Form const & src) {
	out << src.getName();
	if (src.isState())
		std::cout << " is signed and ready to be executed. ";
	else
		std::cout << " needs to be signed. Required grade to sign: " <<
		src.getReqGradeToSign() << ". ";
	std::cout << "Required grade to execute: " << src.getReqGradeToExec() <<
	"." << std::endl;
	return out;
}
