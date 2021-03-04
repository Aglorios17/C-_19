#include "Pony.hpp"

void Pony::show(void)
{
	std::cout << "Im " << name << std::endl;
	std::cout << "And Im " << color << std::endl;
}

Pony::Pony(std::string Name, std::string Color)
{
	name = Name;
	color = Color;
	std::cout << "IM NEW HERE HUHUUUU" << std::endl;
}

Pony::~Pony()
{
	std::cout << name << " : Argh... Im dead" << std::endl;
}
