//
// Created by Debby Willette on 9/4/21.
//

#include <iostream>
#include <cstdlib>
#include <climits>

void char_output(double src)
{
	char c;

	if (src > CHAR_MAX || src < CHAR_MIN || src != src)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = static_cast<char>(src);
		if (c >= 32 && c <= 126)
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
}

void int_output(double src)
{
	if (src > INT_MAX || src < INT_MIN || src != src)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(src) << std::endl;
}

void float_output(double src)
{
	float tmp;

	tmp = static_cast<float>(src);
	std::cout << "float: " << tmp;
	if (tmp - static_cast<int>(tmp) == 0.0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void double_output(double src)
{
	if (src - static_cast<int>(src) == 0.0)
		std::cout << "double: " << src << ".0" << std::endl;
	else
		std::cout << "double: " << src << std::endl;
}

int main(int argc, char **argv)
{
	double d;

	if (argc != 2)
		return (0);

	d = atof(argv[1]);

	char_output(d);
	int_output(d);
	float_output(d);
	double_output(d);

	return (0);
}