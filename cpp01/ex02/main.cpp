#include <iostream>
#include <string>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR;

	stringPTR = &str;

	std::cout << "string address: " << &str << std::endl;
	std::cout << "string address(pointer): " << stringPTR << std::endl;
	std::cout << "string address(reference): " << &stringREF << std::endl;

	std::cout << "string: " << str << std::endl;
	std::cout << "string(pointer): " << *stringPTR << std::endl;
	std::cout << "string(reference): " << stringREF << std::endl;

	return (0);
}