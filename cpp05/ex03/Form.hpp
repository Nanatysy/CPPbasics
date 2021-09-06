#ifndef CPP05_FORM_HPP
#define CPP05_FORM_HPP

#include "iostream"
#include "string"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

	const std::string	_name;
	const int			_req_grade_to_sign;
	const int			_req_grade_to_exec;
	bool				_state;

public:

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("grade is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("grade is too low");
		}
	};

	class IsntSigned : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("form needs to be signed first");
		}
	};

	Form();
	Form(const std::string &name);
	Form(const std::string &name, const int reqGradeToSign,
		 const int reqGradeToExec);
	Form(const Form & src);
	virtual ~Form();

	const std::string &getName() const;
	int getReqGradeToSign() const;
	int getReqGradeToExec() const;
	bool isState() const;

	void beSigned(Bureaucrat const & src);

	virtual void execute(Bureaucrat const & src) const =0;

	Form & operator=(Form const & src);

};

std::ostream & operator<<(std::ostream &out, const Form & src);


#endif //CPP05_FORM_HPP
