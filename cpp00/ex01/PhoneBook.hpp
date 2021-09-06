#ifndef CPP_PHONEBOOK_H
#define CPP_PHONEBOOK_H

#include "Contact.hpp"
#include <iomanip>

class PhoneBook {

private:
	Contact person[8];

public:
	PhoneBook(void);
	~PhoneBook(void);
	void set_contact(int num);
	void show_contact(int num) const;
	void pretty_output(std::string arg) const;
	int show_data(void) const;

};


#endif //CPP_PHONEBOOK_H
