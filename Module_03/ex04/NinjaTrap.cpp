/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(void){}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "Ninja " << this->Name << " appeared" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << this->Name << " left" << std::endl;
	else
		std::cout << this->Name << " is dead" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy NinjaTrap is called" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->Name << " attaque " << target << " a distance, causant " << this->Ranged_attack_damage << " points de degats !" << std::endl; 
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->Name << " attaque " << target << " par melee, causant " << this->Melee_attack_damage << " points de degats !" <<std::endl;
}

int	NinjaTrap::ninjaShoebox(std::string const & target)
{
	if (this->Energy_points > 24)
	{
		std::string attack[] = {"Par mal de sa mere", "Coup de coude dans le ventre", "Maudit les 5 prochaines generations", "Triple brulure indienne", "Petite baleyette"};
		srand(time(0));
		int i = rand() % 5;
		this->Energy_points -= 25;	
		std::cout << this->Name << " attaque " << target <<  " avec '" << attack[i] << "' et inflige " << attack[i].size() << " points de degats ! Il perd 25 d'energie actuellement : " << this->Energy_points << std::endl;
		return (attack[i].size());
	}
	else
		std::cout << this->Name << " a besoin de 25 points d'energie, actuellement : " << this->Energy_points << " points !" << std::endl;
	return (0);
}
