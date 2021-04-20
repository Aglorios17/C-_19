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
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(void){}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "NINJ4-TP " << this->Name << " appeared" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << "NINJ4-TP " << this->Name << " left" << std::endl;
	else
		std::cout << "NINJ4-TP " << this->Name << " is dead" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy NinjaTrap is called" << std::endl;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &copy)
{
	if (this != &copy)
	{
		Name = copy.Name;
		Hit_points = copy.Hit_points;
		Max_hit_points = copy.Max_hit_points;
		Energy_points = copy.Energy_points;
		Max_energy_points = copy.Max_energy_points;
		Level = copy.Level;
		Melee_attack_damage = copy.Melee_attack_damage;
		Ranged_attack_damage = copy.Ranged_attack_damage;
		Armor_damage_reduction = copy.Armor_damage_reduction;
	}
	return (*this);	
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->Name << " attaque " << target << " a distance, causant " << this->Ranged_attack_damage << " points de degats !" << std::endl; 
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << this->Name << " attaque " << target << " par melee, causant " << this->Melee_attack_damage << " points de degats !" <<std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << "NINJ4-TP "<< this->Name << " attack with ninjaShoebox ! on NinjaTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::cout << "NINJ4-TP "<< this->Name << " attack with ninjaShoebox ! on ClapTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << "NINJ4-TP "<< this->Name << " attack with ninjaShoebox ! on FragTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << "NINJ4-TP "<< this->Name << " attack with ninjaShoebox ! on ScavTrap " << target.getName() << std::endl;
}
