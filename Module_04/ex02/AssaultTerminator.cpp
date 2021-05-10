/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 13:33:57 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl; 
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy)
{
	(void)copy;
	std::cout << "* teleports from space *" << std::endl; 
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator & copy)
{
	(void)copy;
	return (*this);
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout <<  "I’ll be back ..." << std::endl; 
}
		
ISpaceMarine *AssaultTerminator::clone(void) const
{
	AssaultTerminator *add = new AssaultTerminator(*this);
	return (add);
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. Purify it !" << std::endl; 
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl; 
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout <<  "* attaque with chainfists *" << std::endl; 
}
