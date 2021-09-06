#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _secret;
	int flag;

public:
	Contact(void);
	~Contact(void);
	void set_name(std::string arg);
	void set_lastname(std::string arg);
	void set_nickname(std::string arg);
	void set_phone_number(std::string arg);
	void set_secret(std::string arg);
	void set_flag(void);
	void show_data(void) const;
	int get_flag(void) const;
	std::string get_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;

};

#endif