/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:08:02 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super  Mutant") 
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy) 
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant & SuperMutant::operator=(const SuperMutant & copy)
{
	if (this != &copy)
		Enemy::operator=(copy);
	return (*this);
}

SuperMutant::~SuperMutant(void) 
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if (this->HP > damage)
		this->HP -= damage;
	else
		this->HP = 0;
	std::cout << this->Type << " a maintenant " << this->HP << " points de vie !" << std::endl;	
}
