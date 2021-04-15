/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(const AMateria & copy) 
{
	Type = copy.Type;
	_xp = copy._xp;
}

AMateria::AMateria(std::string const & type) 
{
	Type = type;
	_xp = 0;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType(void) const
{
	return (this->Type);
}

unsigned int AMateria::getXP(void) const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	this->_xp += 10;
	(void)target;
}
