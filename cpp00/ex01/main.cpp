#include "Contact.hpp"
#include "PhoneBook.hpp"

void search(PhoneBook *book)
{
	int			num = 0;
	std::string 	str;

	if (book->show_data() == 0)
		return ;
	std::cout << "Please enter index: ";
	std::getline(std::cin, str);
	for(size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]) == 0)
		{
			std::cerr << "Wrong index??" << std::endl;
			return ;
		}
	}
	num = std::atoi(str.c_str());
//	std::cout << num << std::endl;
	book->show_contact(num - 1);
}

int	main()
{
	std::string	arg;
	PhoneBook	book;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Please enter command: ";
		std::getline(std::cin, arg);
		if (arg.compare("EXIT") == 0)
			break;
		else if (arg.compare("ADD") == 0)
			book.set_contact(i++);
		else if (arg.compare("SEARCH") == 0)
			search(&book);
		else
			std::cerr << "Oops, you probably mistyped something" << std::endl;
	}
	return (0);
}