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

ScavTrap::ScavTrap(void){}

ScavTrap::ScavTrap(std::string name)
{
	this->Name = name;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 50;
	this->Max_energy_points = 50;
	this->Level = 1;
	this->Melee_attack_damage = 20;
	this->Ranged_attack_damage = 15;
	this->Armor_damage_reduction = 3;
	std::cout << this->Name << " is here" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << this->Name << " desappears" << std::endl;
	else
		std::cout << this->Name << " is in his next life" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TR4P " << this->Name << " attaque " << target << " a distance, causant " << this->Ranged_attack_damage << " points de degats !" << std::endl; 
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TR4P " << this->Name << " attaque " << target << " par melee, causant " << this->Melee_attack_damage << " points de degats !" <<std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount > this->Armor_damage_reduction)
		amount -= this->Armor_damage_reduction;
	else
		amount = 0;
	std::cout << "SC4V-TR4P "<< this->Name << " perd " << amount << " points de degats ! (armor reduction : " << this->Armor_damage_reduction << " )." << std::endl;
	if (this->Hit_points > amount)
		this->Hit_points -= amount;
	else
		this->Hit_points = 0;
	std::cout << "SC4V-TR4P " << this->Name << " a maintenant " << this->Hit_points << " points de vie !" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SC4V-TR4P " << this->Name << " gagne " << amount << " points de vie !" << std::endl;
	if ((amount + this->Hit_points) < this->Max_hit_points)
		this->Hit_points += amount;
	else
		this->Hit_points = 100;
	std::cout << "SC4V-TR4P " << this->Name << " a maintenant " << this->Hit_points << " points de vie !" << std::endl;
}

void	ScavTrap::beRepaired_energy(unsigned int amount)
{
	std::cout << "SC4V-TR4P " << this->Name << " gagne " << amount << " points d'energy !" << std::endl;
	if ((amount + this->Energy_points) < this->Max_energy_points)
		this->Energy_points += amount;
	else
		this->Energy_points = 100;
	std::cout << "SC4V-TR4P " << this->Name << " a maintenant " << this->Energy_points << " points d'energy !" << std::endl;
}

std::string	ScavTrap::get(void)
{
	return (this->Name);
}

int	ScavTrap::get(std::string attack)
{
	if (attack == "Melee")
		return (this->Melee_attack_damage);
	if (attack == "Ranged")
		return (this->Ranged_attack_damage);
	return (0);
}

int	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->Energy_points > 24)
	{
		std::string attack[] = {"Aller au bout du monde", "Faire le tour du monde", "Voler un coffre au Pirates", "S'affronter en duel", "Challenge de pompes"};
		srand(time(0));
		int i = rand() % 5;
		this->Energy_points -= 25;	
		std::cout << "SC4V-TR4P " << this->Name << " propose a " << target <<  " de faire '" << attack[i] << "' ! Il perd 25 d'energie actuellement : " << this->Energy_points << std::endl;
	}
	else
		std::cout << "SC4V-TR4P " << this->Name << " a besoin de 25 points d'energie, actuellement : " << this->Energy_points << " points !" << std::endl;
	return (0);
}

void	ScavTrap::show(void)
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
