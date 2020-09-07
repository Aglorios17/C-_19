#include <iostream>
#include <string>

int main()
{
	std::string prenom("Alessio");
	std::string nom("Glorioso");
	std::string	nomcomplet;

	nomcomplet += nom;
	nomcomplet += " ";
	nomcomplet += prenom;

	std::cout << "nom : " << nomcomplet << std::endl;
	return (0);
}
