#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &arme) : name(Name), weapon(arme) {}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
