#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	ShrubberyCreationForm first("home");
	RobotomyRequestForm second("Car");
	RobotomyRequestForm third("Cat");
	PresidentialPardonForm fourth("Nastya");

	Bureaucrat bill("Bill", 2);

	std::cout << "-------***-------" << std::endl;

	std::cout << bill << std::endl;
	std::cout << first;
	std::cout << second;
	std::cout << third;
	std::cout << fourth;

	std::cout << "-------***-------" << std::endl;

	bill.signForm(first);
	bill.signForm(second);
	bill.signForm(third);
	bill.signForm(fourth);

	std::cout << "-------***-------" << std::endl;

	std::cout << first;
	std::cout << second;
	std::cout << third;
	std::cout << fourth;

	std::cout << "-------***-------" << std::endl;

	bill.executeForm(first);
	bill.executeForm(second);
	bill.executeForm(third);
	bill.executeForm(fourth);

	std::cout << "-------***-------" << std::endl;

	Bureaucrat bob("Bob");
	Bureaucrat bruce;
	ShrubberyCreationForm fifth("home");
	RobotomyRequestForm six("Car");
	PresidentialPardonForm seventh("smt");

	std::cout << "-------***-------" << std::endl;

	std::cout << bob << std::endl;

	std::cout << fifth;
	std::cout << six;
	std::cout << seventh;

	std::cout << "-------***-------" << std::endl;

	bob.executeForm(fifth);
	bob.executeForm(six);
	bob.executeForm(seventh);

	std::cout << "-------***-------" << std::endl;

	bob.signForm(fifth);
	bruce.executeForm(fifth);


	std::cout << "-------***-------" << std::endl;

	return (0);
}
