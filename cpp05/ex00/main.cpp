#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bill("Bill", 155);
		std::cout << bill;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-----------------------------" << std::endl;

	Bureaucrat	bill("Bill", 1);
	std::cout << bill;
	try
	{
		std::cout << "Trying to increment " << bill.getName() << " grade" <<
				  std::endl;
		bill.incGrade();
	}
	catch (std::exception & e)
	{
		std::cout << bill.getName() << ": " << e.what() << std::endl;
	}
	std::cout << bill;

	std::cout << "-----------------------------" << std::endl;

	Bureaucrat	bob("Bob", 150);
	std::cout << bob;
	try
	{
		std::cout << "Trying to decrement " << bob.getName() << " grade" <<
		std::endl;
		bob.decGrade();
	}
	catch (std::exception & e)
	{
		std::cout << bob.getName() << ": " << e.what() << std::endl;
	}
	std::cout << bob;

	std::cout << "-----------------------------" << std::endl;

	Bureaucrat	bruce("Bruce");
	std::cout << bruce;
	try
	{
		std::cout << "Trying to increment " << bruce.getName() << " grade" <<
				  std::endl;
		bruce.incGrade();
	}
	catch (std::exception & e)
	{
		std::cout << bruce.getName() << ": " << e.what() << std::endl;
	}
	std::cout << bruce;

	std::cout << "-----------------------------" << std::endl;

	return (0);
}
