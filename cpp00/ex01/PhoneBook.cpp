#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void PhoneBook::set_contact(int num) {
	std::string arg;

	std::cout << "Please enter the first name: ";
	getline(std::cin, arg);
	this->person[num % 8].set_name(arg);
	std::cout << "Please enter the last name: ";
	getline(std::cin, arg);
	this->person[num % 8].set_lastname(arg);
	std::cout << "Please enter the nickname: ";
	getline(std::cin, arg);
	this->person[num % 8].set_nickname(arg);
	std::cout << "Please enter the phone number: ";
	getline(std::cin, arg);
	this->person[num % 8].set_phone_number(arg);
	std::cout << "Please enter the darkest secret: ";
	getline(std::cin, arg);
	this->person[num % 8].set_secret(arg);
	this->person[num % 8].set_flag();
}

void PhoneBook::show_contact(int num) const {
	if (num >= 0 && num < 8 && this->person[num].get_flag())
		this->person[num].show_data();
	else
		std::cerr << "Wrong index" << std::endl;
	return ;
}

void PhoneBook::pretty_output(std::string arg) const {
	if (arg.length() > 10)
		std::cout << arg.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << arg << "|";
}

int PhoneBook::show_data() const {
	int count = 0;

	std::cout << std::setw(10) << "index" << "|";
	std::cout <<  std::setw(10) << "first name" << "|";
	std::cout <<  std::setw(10)  << "last name" << "|";
	std::cout <<  std::setw(10) << "nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for(int i = 0; i < 8; i++)
	{
		if (this->person[i].get_flag())
		{
			std::cout << std::setw(10) << i + 1 << "|";
			pretty_output(this->person[i].get_name());
			pretty_output(this->person[i].get_last_name());
			pretty_output(this->person[i].get_nickname());
			std::cout << std::endl;
			count++;
		}
	}
	return (count);
}

