#include "contact.hpp"

void	Contact::add(int mem)
{
	std::cout << "Adding a contact:" << std::endl;
	std::cout << "Enter First Name: ";
	std::getline(std::cin, FirstName);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, LastName);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, Nickname);
	std::cout << "Enter Login: ";
	std::getline(std::cin, Login);
	std::cout << "Enter Postal Adress: ";
	std::getline(std::cin, Adress);
	std::cout << "Enter Email Adress: ";
	std::getline(std::cin, Email);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, Phone);
	std::cout << "Enter Birthday Date: ";
	std::getline(std::cin, Birthday);
	std::cout << "Enter Favorite Meal: ";
	std::getline(std::cin, Meal);
	std::cout << "Enter Underware Color: ";
	std::getline(std::cin, Underwear);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, Secret);
}

int main()
{
	bool	bcl;
	int		mem;
	std::string cmd;
	Contact contact[8];

	bcl = true;
	mem = 0;
	while (bcl == true)
	{
		std::cout << "Que voulez vous faire ?" << std::endl;
		std::cout << "commande : ADD, SEARCH, EXIT" << std::endl;
		std::cout << ">> ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
		{
			
			std::cout << "Stop annuaire" << std::endl;
			bcl = false;
		}
		else if (cmd == "ADD")
		{
			if (mem > 7)
				std::cout << "Annuaire complet, 8 contacts enregistrer\n\n" << std::endl;
			else
			{
				contact[mem].add(mem);
				mem++;
				system("clear");
			}
		}
		else
			system("clear");
	}
	return (0);
}
