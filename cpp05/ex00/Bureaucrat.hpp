#ifndef CPP05_BUREAUCRAT_HPP
#define CPP05_BUREAUCRAT_HPP

#include "iostream"
#include "string"

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
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("Grade too low");
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

	Bureaucrat & operator=(Bureaucrat const & src);

};

std::ostream & operator<<(std::ostream &out, const Bureaucrat & src);

#endif //CPP05_BUREAUCRAT_HPP
