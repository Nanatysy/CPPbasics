#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include "iostream"
#include "string"
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name; // const??
	int					_grade;

	void setGrade(int grade);

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

	Bureaucrat();
	Bureaucrat(const std::string &name);
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat & src);
	virtual ~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;

	void incGrade(void);
	void decGrade(void);

	void signForm(Form & src) const;
	void executeForm(Form const & form) const;

	Bureaucrat & operator=(Bureaucrat const & src);

};

std::ostream & operator<<(std::ostream &out, const Bureaucrat & src);

#endif //CPP05_BUREAUCRAT_HPP
