#ifndef CPP05_ROBOTOMYREQUESTFORM_HPP
#define CPP05_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	static int	_psevdo_random;
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm & src);
	virtual ~RobotomyRequestForm();

	const std::string &getTarget() const;

	RobotomyRequestForm & operator=(RobotomyRequestForm const & src);

	void execute(Bureaucrat const & src) const;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_HPP
