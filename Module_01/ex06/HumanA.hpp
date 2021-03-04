#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "iostream"
# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weapon;
		std::string name;

	public:
		HumanA(std::string Name, Weapon &arme);
		void attack(void);
};

#endif

