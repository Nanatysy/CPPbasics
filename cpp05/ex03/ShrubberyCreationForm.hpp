#ifndef CPP05_SHRUBBERYCREATIONFORM_HPP
#define CPP05_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;

public:
	class FileException : std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return ("failed to open a file");
		}
	};

	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm & src);
	virtual ~ShrubberyCreationForm();

	const std::string &getTarget() const;

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & src);

	void execute(Bureaucrat const & src) const;
};


#endif //CPP05_SHRUBBERYCREATIONFORM_HPP
