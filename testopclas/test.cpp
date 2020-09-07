#include <iostream>
#include <string>
#include <cmath> //fonction math sqrt, ...

int main()
{
	int	age(0);
	int	info(0);
	std::string nometprenom("sans nom");
	std::cout << "ton age ?" << std::endl;
	std::cin	>> age;
	++info;
	std::cin.ignore();
	std::cout << "tu as " << age << " ans !" << std::endl;
	std::cout << "info enregistrer " << info << " !" << std::endl;
	std::cout << "ton nom ?" << std::endl;
	std::getline(std::cin, nometprenom);
	++info;
	std::cout << "ton nom est " << nometprenom << " !" << std::endl;
	std::cout << "info enregistrer " << info << " !" << std::endl;
	return (0);
}
