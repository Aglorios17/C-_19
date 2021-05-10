/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 16:02:56 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire(void) : AMateria("Fire") {}

Fire::Fire(const Fire &copy) : AMateria(copy)
{
	_xp = copy._xp;
}

Fire & Fire::operator=(const Fire &copy)
{
	if (this != &copy)
		_xp = copy._xp;
	return (*this);
}

Fire::~Fire(void) {}

AMateria* Fire::clone(void) const
{
	return (new Fire(*this));
}

void Fire::use(ICharacter& target)
{
	std::cout << "* shoots an fire ball at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
