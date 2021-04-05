/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void){}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
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

FragTrap::~FragTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << this->Name << " left" << std::endl;
	else
		std::cout << this->Name << " is dead" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy FragTrap is called" << std::endl;
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
void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attaque " << target << " a distance, causant " << this->Ranged_attack_damage << " points de degats !" << std::endl; 
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attaque " << target << " par melee, causant " << this->Melee_attack_damage << " points de degats !" <<std::endl;
}

int	FragTrap::vaulthunter_dot_exe(std::string const & target)
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
