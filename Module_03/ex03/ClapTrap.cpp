/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){}

ClapTrap::ClapTrap(int hit, int max_hit, int energy, int max_energy, int level, std::string name, int melee, int ranged, int armor)
{
	this->Name = name;
	this->Hit_points = hit;
	this->Max_hit_points = max_hit;
	this->Energy_points = energy;
	this->Max_energy_points = max_energy;
	this->Level = level;
	this->Melee_attack_damage = melee;
	this->Ranged_attack_damage = ranged;
	this->Armor_damage_reduction = armor;
	std::cout << "CL4P-TP " << this->Name << " called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP" << " desappears" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->Armor_damage_reduction)
		amount -= this->Armor_damage_reduction;
	else
		amount = 0;
	std::cout << "CL4P-TP "<< this->Name << " perd " << amount << " points de degats ! (armor reduction : " << this->Armor_damage_reduction << " )." << std::endl;
	if (this->Hit_points > amount)
		this->Hit_points -= amount;
	else
		this->Hit_points = 0;
	std::cout << "CL4P-TP " << this->Name << " a maintenant " << this->Hit_points << " points de vie !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "CL4P-TP " << this->Name << " gagne " << amount << " points de vie !" << std::endl;
	if ((amount + this->Hit_points) < this->Max_hit_points)
		this->Hit_points += amount;
	else
		this->Hit_points = 100;
	std::cout << "CL4P-TP " << this->Name << " a maintenant " << this->Hit_points << " points de vie !" << std::endl;
}

void	ClapTrap::beRepaired_energy(unsigned int amount)
{
	std::cout << "CL4P-TP " << this->Name << " gagne " << amount << " points d'energy !" << std::endl;
	if ((amount + this->Energy_points) < this->Max_energy_points)
		this->Energy_points += amount;
	else
		this->Energy_points = 100;
	std::cout << "CL4P-TP " << this->Name << " a maintenant " << this->Energy_points << " points d'energy !" << std::endl;
}

std::string	ClapTrap::get(void)
{
	return (this->Name);
}

std::string	ClapTrap::getName(void) const
{
	return (this->Name);
}

int	ClapTrap::get(std::string attack)
{
	if (attack == "Melee")
		return (this->Melee_attack_damage);
	if (attack == "Ranged")
		return (this->Ranged_attack_damage);
	return (0);
}

void	ClapTrap::show(void)
{
	std::cout << "Name : " << this->Name << std::endl;
	std::cout << "Live : " << this->Hit_points << std::endl;
	std::cout << "Max Live : " << this->Max_hit_points << std::endl;
	std::cout << "Energy : " << this->Energy_points << std::endl;
	std::cout << "Max Energy : " << this->Max_energy_points << std::endl;
	std::cout << "Level : " << this->Level << std::endl;
	std::cout << "Melee attack : " << this->Melee_attack_damage << std::endl;
	std::cout << "Ranged attack : " << this->Ranged_attack_damage << std::endl;
	std::cout << "Armor damage reduction : " << this->Armor_damage_reduction << std::endl;
}
