#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	Login;
		std::string	Adress;
		std::string	Email;
		std::string	Phone;
		std::string	Birthday;
		std::string	Meal;
		std::string	Underwear;
		std::string	Secret;

	public:
		void	add(int mem);
		void	show(int i);
};

#endif
