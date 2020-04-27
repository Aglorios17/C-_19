#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include "class_contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
	int amount;
public:
	Phonebook();
	virtual ~Phonebook();
};

#endif
