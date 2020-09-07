#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::ofstream monflux("./scores.txt"); //remplacer
	std::ofstream monflux("./scores.txt", std::ios::app); //rajouter
//	std::ifstream monflux("./scores.txt"); //lecture only
	
	if (monflux)
	{
		monflux << "le fichier est valide." << std::endl;
		std::cout << "imprimer" << std::endl;
//		std::string ligne;					// lecture
//		while (std::getline(monflux, ligne))
//			std::cout << ligne << std::endl;
	}
	else
		std::cout << "ERROR" << std::endl;
	return (0);
}
