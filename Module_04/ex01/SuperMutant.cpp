/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SuperMutant.hpp"
# include "Enemy.hpp"

SuperMutant::SuperMutant(void) {}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type) 
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy) {}

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
