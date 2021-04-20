/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {}

Peon::Peon(std::string name)
{
	this->Name = name;
	std::cout << this->Name << " said : Zog zog" << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy) {}

Peon & Peon::operator=(const Peon & copy)
{
	if (this != &copy)
		Name = copy.Name;
	return (*this);
}

Peon::~Peon(void)
{
	std::cout << this->Name << " said : Bleuark..." << std::endl;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->Name << " was just polymorphed into a pink pony!" << std::endl;
}
