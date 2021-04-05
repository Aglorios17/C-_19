/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(void){}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
/*	this->Name = name;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Melee_attack_damage = 50;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
*/
	std::cout << this->Name << " appeared" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << this->Name << " left" << std::endl;
	else
		std::cout << this->Name << " is dead" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy SuperTrap is called" << std::endl;
}
/*
FragTrap::FragTrap(const FragTrap &copy)
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
*/
void	SuperTrap::rangedAttack(std::string const & target)
{
	std::cout << "SUP3R-TP " << this->Name << " attaque " << target << " a distance, causant " << this->Ranged_attack_damage << " points de degats !" << std::endl; 
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	std::cout << "SUP3R-TP " << this->Name << " attaque " << target << " par melee, causant " << this->Melee_attack_damage << " points de degats !" <<std::endl;
}
