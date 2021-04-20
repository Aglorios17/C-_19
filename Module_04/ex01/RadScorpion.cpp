/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"
# include "Enemy.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Super Mutant") 
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy) {}

RadScorpion & RadScorpion::operator=(const RadScorpion & copy)
{
	if (this != &copy)
		Enemy::operator=(copy);
	return (*this);
}

RadScorpion::~RadScorpion(void) 
{
	std::cout << "* SPROTCH *" << std::endl;
}
