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

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5)
{
	std::cout << "SUP3R-TP " << this->Name << " appeared" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	if (this->Hit_points > 0)
		std::cout << "SUP3R-TP " << this->Name << " left" << std::endl;
	else
		std::cout << "SUP3R-TP " << this->Name << " is dead" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy SuperTrap is called" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
