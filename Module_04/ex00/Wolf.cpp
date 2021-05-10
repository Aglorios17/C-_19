/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wolf.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 12:26:09 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wolf.hpp"

Wolf::Wolf(std::string name) : Victim(name)
{
	this->Name = name;
	std::cout << "Rrrh I'm an aplha" << std::endl;
}

Wolf::Wolf(const Wolf &copy) : Victim(copy)
{
	std::cout << "Rrrh I'm an aplha" << std::endl;
}

Wolf & Wolf::operator=(const Wolf & copy)
{
	if (this != &copy)
		Name = copy.Name;
	return (*this);
}

Wolf::~Wolf(void)
{
	std::cout << "Aargh..." << std::endl;
}

void	Wolf::getPolymorphed(void) const
{
	std::cout << this->Name << " has been turned into a Chiwawa!" << std::endl;
}
