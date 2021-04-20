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

FragTrap::FragTrap(void){}

FragTrap::FragTrap(std::string name)
{
	this->Name = name;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 100;
	this->Max_energy_points = 100;
	this->Level = 1;
	this->Melee_attack_damage = 50;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
	std::cout << "FR4G-TP " << this->Name << " appeared" << std::endl;
}

FragTrap::~FragTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << "FR4G-TP " << this->Name << " left" << std::endl;
	else
		std::cout << "FR4G-TP " << this->Name << " is dead" << std::endl;
}

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

FragTrap &FragTrap::operator=(FragTrap const& copy)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attaque " << target << " a distance, causant " << this->Ranged_attack_damage << " points de degats !" << std::endl; 
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attaque " << target << " par melee, causant " << this->Melee_attack_damage << " points de degats !" <<std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount > this->Armor_damage_reduction)
		amount -= this->Armor_damage_reduction;
	else
		amount = 0;
	std::cout << "FR4G-TP " << this->Name << " perd " << amount << " points de degats ! (armor reduction : " << this->Armor_damage_reduction << " )." << std::endl;
	if (this->Hit_points > amount)
		this->Hit_points -= amount;
	else
		this->Hit_points = 0;
	std::cout << "FR4G-TP " << this->Name << " a maintenant " << this->Hit_points << " points de vie !" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->Name << " gagne " << amount << " points de vie !" << std::endl;
	if ((amount + this->Hit_points) < this->Max_hit_points)
		this->Hit_points += amount;
	else
		this->Hit_points = 100;
	std::cout << "FR4G-TP " << this->Name << " a maintenant " << this->Hit_points << " points de vie !" << std::endl;
}

void	FragTrap::beRepaired_energy(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->Name << " gagne " << amount << " points d'energy !" << std::endl;
	if ((amount + this->Energy_points) < this->Max_energy_points)
		this->Energy_points += amount;
	else
		this->Energy_points = 100;
	std::cout << "FR4G-TP " << this->Name << " a maintenant " << this->Energy_points << " points d'energy !" << std::endl;
}

std::string	FragTrap::get(void)
{
	return (this->Name);
}

unsigned int	FragTrap::get(std::string attack)
{
	if (attack == "Melee")
		return (this->Melee_attack_damage);
	if (attack == "Ranged")
		return (this->Ranged_attack_damage);
	return (0);
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->Energy_points > 24)
	{
		std::string attack[] = {"Par mal de sa mere", "Coup de coude dans le ventre", "Maudit les 5 prochaines generations", "Triple brulure indienne", "Petite baleyette"};
		srand(time(0));
		int i = rand() % 5;
		this->Energy_points -= 25;	
		std::cout << "FR4G-TP " << this->Name << " attaque " << target <<  " avec '" << attack[i] << "' et inflige " << attack[i].size() << " points de degats ! Il perd 25 d'energie actuellement : " << this->Energy_points << std::endl;
		return (attack[i].size());
	}
	else
		std::cout << "FR4G-TP " << this->Name << " a besoin de 25 points d'energie, actuellement : " << this->Energy_points << " points !" << std::endl;
	return (0);
}

void	FragTrap::show(void)
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
