#include "Karen.hpp"

Karen::Karen() {
	ref = new std::string[4];
	ref[0] = "DEBUG";
	ref[1] = "INFO";
	ref[2] = "WARNING";
	ref[3] = "ERROR";
	f[0] = &Karen::debug;
	f[1] = &Karen::info;
	f[2] = &Karen::warning;
	f[3] = &Karen::error;
	return ;
}

Karen::~Karen() {
	delete [] ref;
	return ;
}

void Karen::complain( std::string level ) {
	int new_level;

	new_level = 0;
	while (new_level < 4 && ref[new_level].compare(level))
		new_level++;
	while (new_level >= 4)
	{
		std::cerr << "Invalid level" << std::endl;
		return ;
	}

	(this->*f[new_level])();
}

void Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
	return ;
}

void Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You "
				 "don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming here for years and you just started working here last month.";
	std::cout << std::endl;
}

void Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}