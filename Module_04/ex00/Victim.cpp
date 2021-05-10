/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 12:26:00 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void){}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	this->Name = name;
}

Victim::Victim(const Victim &copy)
{
	Name = copy.Name;
	std::cout << "Some random victim called " << Name << " just appeared!" << std::endl;
}

Victim & Victim::operator=(const Victim & copy)
{
	if (this != &copy)
		Name = copy.Name;
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->Name << " died for no apparent reasons!" << std::endl;
}

void	Victim::intro(void) const
{
	std::cout << "I am " << this->Name << " and i like otters!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & copy)
{
	copy.intro();
	return (o);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->Name << " has been turned in a cute little sheep!" << std::endl;
}
