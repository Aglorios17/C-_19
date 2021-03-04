#include "Weapon.hpp"

Weapon::Weapon(std::string Type)
{
	type = Type;
}

void	Weapon::setType(const std::string &string)
{
	type = string;
}

const std::string&	Weapon::getType(void)
{	
	return (type);
}
