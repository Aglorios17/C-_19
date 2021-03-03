#include "Pony.hpp"

void Pony::show(void)
{
	std::cout << "Im " << P_Name << std::endl;
	std::cout << "And Im " << P_Color << std::endl;
}

Pony::Pony(std::string Name, std::string Color)
{
	P_Name = Name;
	P_Color = Color;
	std::cout << "IM NEW HERE HUHUUUU" << std::endl;
}

Pony::~Pony()
{
	std::cout << P_Name << " : Argh... Im dead" << std::endl;
}
