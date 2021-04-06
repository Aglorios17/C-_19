/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){}

Sorcerer::Sorcerer(std::string name, std::string Titre)
{
	std::cout << name << ", " << Titre << ", is born !" << std::endl;
	this->Name = name;
	this->Title = Titre;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	Name = copy.Name;
	Title = copy.Title;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->Name << ", " << this->Title << ", is dead. Consequences will never be the same !" << std::endl;
}

void        Sorcerer::Polymorph(Victim const & copy) const
{
	copy.getPolymorphed();
}

void	Sorcerer::intro(void) const
{
	std::cout << "I am " << this->Name << " and i like otters!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & copy)
{
	copy.intro();
	return (o);
}
