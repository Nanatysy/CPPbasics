#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "-----------***-----------" << std::endl;

	{
		Bureaucrat bill("Bill");
		Form first;

		std::cout << bill;
		std::cout << first;

		bill.signForm(first);

		std::cout << first;
	}

	std::cout << "-----------***-----------" << std::endl;

	{
		try
		{
			Form first("ImportantPaper", 0, 0);
			std::cout << first;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "-----------***-----------" << std::endl;

	{
		try
		{
			Bureaucrat bill("Bill", 15);
			Form first("ImportantPaper", 10, 5);

			std::cout << bill;
			std::cout << first;

			bill.signForm(first);

			std::cout << first;
		}
		catch (std::exception & e)
		{
			std::cout << e.what();
		}
	}

	std::cout << "-----------***-----------" << std::endl;

	return (0);
}
