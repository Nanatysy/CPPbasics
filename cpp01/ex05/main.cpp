#include "Karen.hpp"

int main()
{
	Karen tmp;
	std::string arg;

	while (1)
	{
		std::getline(std::cin, arg);
		if (std::cin.eof())
			break ;
		tmp.complain(arg);
	}
	return (0);
}