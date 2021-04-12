/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void){}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	std::cout << "SC4V-TP " << this->Name << " is here" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << "SC4V-TP " << this->Name << " desappears" << std::endl;
	else
		std::cout << "SC4V-TP " << this->Name << " is in his next life" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy ScavTrap is called" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->Name << " attaque " << target << " a distance, causant " << this->Ranged_attack_damage << " points de degats !" << std::endl; 
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->Name << " attaque " << target << " par melee, causant " << this->Melee_attack_damage << " points de degats !" <<std::endl;
}

int	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->Energy_points > 24)
	{
		std::string attack[] = {"Aller au bout du monde", "Faire le tour du monde", "Voler un coffre au Pirates", "S'affronter en duel", "Challenge de pompes"};
		srand(time(0));
		int i = rand() % 5;
		this->Energy_points -= 25;	
		std::cout << "SC4V-TP " << this->Name << " propose a " << target <<  " de faire '" << attack[i] << "' ! Il perd 25 d'energie actuellement : " << this->Energy_points << std::endl;
	}
	else
		std::cout << "SC4V-TP " << this->Name << " a besoin de 25 points d'energie, actuellement : " << this->Energy_points << " points !" << std::endl;
	return (0);
}
