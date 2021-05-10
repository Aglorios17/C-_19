/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:28:57 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") 
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy) 
{
	std::cout << "* click click click *" << std::endl;
	*this = copy;
}

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
