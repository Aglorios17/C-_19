#include "ClassContact.hpp"

void	Contact::show(int i)
{
	std::string tmp;

	std::cout << std::setw(10) << i << "|" ;
	if (FirstName.length() > 10)
	{
		tmp = FirstName.substr(0, 9);
		tmp = tmp + ".";
	}
	else
		tmp = FirstName;
	std::cout << std::setw(10) << tmp << "|" ;
	if (LastName.length() > 10)
	{
		tmp = LastName.substr(0, 9);
		tmp = tmp + ".";
	}
	else
		tmp = LastName;
	std::cout << std::setw(10) << tmp << "|" ;
	if (Login.length() > 10)
	{
		tmp = Login.substr(0, 9);
		tmp = tmp + ".";
	}
	else
		tmp = Login;
	std::cout <<  std::setw(10) << tmp << "|" ;
	std::cout << "\n";
}

void	Contact::index(int i)
{
	std::cout << "contact : " << i << "\n" ;
	std::cout << "First Name: ";
	std::cout << FirstName << "\n";
	std::cout << "Last Name: ";
	std::cout << LastName << "\n";
	std::cout << "Nickname: ";
	std::cout << Nickname << "\n";
	std::cout << "Login: ";
	std::cout << Login << "\n";
	std::cout << "Postal Adress: ";
	std::cout << Adress << "\n";
	std::cout << "Email Adress: ";
	std::cout << Email << "\n";
	std::cout << "Phone Number: ";
	std::cout << Phone << "\n";
	std::cout << "Birthday Date: ";
	std::cout << Birthday << "\n";
	std::cout << "Favorite Meal: ";
	std::cout << Meal << "\n";
	std::cout << "Underware Color: ";
	std::cout << Underwear << "\n";
	std::cout << "Darkest Secret: ";
	std::cout << Secret << "\n\n";
}

void	Contact::add(int mem)
{
	int first;

	first = true;
	std::cout << "Adding a contact:" << std::endl;
	while (first == true)
	{
		std::cout << "Enter First Name: ";
		std::getline(std::cin, FirstName);
		if (FirstName[0] != '\0')
			first = false;
		else
			std::cout << "ERROR\n";
	}
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
	int		i;
	int		bcl2;
	std::string cmd;
	Contact contact[8];

	bcl = true;
	bcl2 = true;
	mem = 0;
	system("clear");
	while (bcl == true)
	{
		std::cout << "Que voulez vous faire ?" << std::endl;
		std::cout << "commande : ADD, SEARCH, EXIT" << std::endl;
		std::cout << ">> ";
		if (!(std::getline(std::cin, cmd)))
			bcl = false;
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
		else if (cmd == "SEARCH")
		{
			i = 0;
			system("clear");
			while (i < mem)
			{
				contact[i].show(i + 1);
				i++;
			}
			if (mem > 0)
			{
				bcl2 = true;
				while (bcl2 == true)
				{
					std::cout << "Rentrez le numero du contact rechercher." << std::endl;
					std::cout << ">> ";
					if (!(std::getline(std::cin, cmd)))
						bcl2 = false;
					try 
					{
						i = std::stoi(cmd);
						for (int a = 0; a < cmd.length(); a++)
							if (!isdigit(cmd[a]))
								i = -1;
						if (i > 0 && i < 9 && i <= mem)
						{
							contact[i - 1].index(i);
							bcl2 = false; 
						}
						else
							std::cout << "Pas reconnu dans l'index.\n" << std::endl;
					}
					catch (std::invalid_argument const &e)
					{
						std::cout << "Pas reconnu dans l'index.\n" << std::endl;
						i = 0;
					}
					catch (std::out_of_range const &e)
					{
						std::cout << "Pas reconnu dans l'index.\n" << std::endl;
						i = 0;
					}
				}
			}
			else
				std::cout << "Pas de contact\n" << std::endl;
		}
		else
			system("clear");
	}
	return (0);
}
