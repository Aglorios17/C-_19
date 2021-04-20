/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wolf.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wolf.hpp"

Wolf::Wolf(void) {}

Wolf::Wolf(std::string name)
{
	this->Name = name;
	std::cout << this->Name << " said : rrrh I'm an aplha" << std::endl;
}

Wolf::Wolf(const Wolf &copy) : Victim(copy) {}

Wolf & Wolf::operator=(const Wolf & copy)
{
	if (this != &copy)
		Name = copy.Name;
	return (*this);
}

Wolf::~Wolf(void)
{
	std::cout << this->Name << " said : argh..." << std::endl;
}

void	Wolf::getPolymorphed(void) const
{
	std::cout << this->Name << " was just polymorphed into a Chiwawa!" << std::endl;
}
