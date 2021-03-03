#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie is here" << std::endl;
	Name = "Robert";
	Type = "Walker";
}

Zombie::Zombie(std::string Zname , std::string Ztype)
{
	std::cout << "Zombie is here" << std::endl;
	Name = Zname;
	Type = Ztype;
}

Zombie::~Zombie()
{
	std::cout << Name << " " << " dieeeeeee" << std::endl;
}

void	Zombie::announce()
{
	std::cout << Name << " " << Type << " Braiiiiiiinnnssss..." << std::endl;
}
