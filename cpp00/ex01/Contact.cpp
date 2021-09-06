#include "Contact.hpp"

Contact::Contact(void) : flag(0) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void Contact::set_name(std::string arg) {
	this->_first_name = arg;
	return ;
}

void Contact::set_lastname(std::string arg) {
	this->_last_name = arg;
	return ;
}

void Contact::set_nickname(std::string arg) {
	this->_nickname = arg;
	return ;
}

void Contact::set_phone_number(std::string arg) {
	this->_phone_number = arg;
	return ;
}

void Contact::set_secret(std::string arg) {
	this->_secret = arg;
	return ;
}

void Contact::set_flag(void) {
	this->flag = 1;
}

void Contact::show_data() const {
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Lastname: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
	return ;
}

int Contact::get_flag(void) const {
	return (this->flag);
}

std::string Contact::get_name() const {
	return (this->_first_name);
}

std::string Contact::get_last_name() const {
	return (this->_last_name);
}

std::string Contact::get_nickname() const {
	return (this->_nickname);
}