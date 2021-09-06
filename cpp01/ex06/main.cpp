#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen tmp;

	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	tmp.complain(argv[1]);
	return (0);
}