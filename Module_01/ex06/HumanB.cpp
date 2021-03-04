#include "HumanB.hpp"

HumanB::HumanB(std::string Name) : name(Name) {}

void	HumanB::setWeapon(Weapon &arme)
{
	weapon = &arme; 
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
