/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : actual(0)
{
	int i = 0;
	while (i < 4)
		this->inv[i++] = 0;
}

MateriaSource::MateriaSource(const MateriaSource & copy)
{
//	inv = copy.inv;
	actual = copy.actual;
}

MateriaSource::~MateriaSource(void)
{	
	int i = 0;
	while (i < this->actual)
		delete this->inv[i++];
}

void MateriaSource::learnMateria(AMateria *learn)
{
	int i = 0;
	if (!learn || this->actual == 4)
		return ;
	while (i < this->actual)
		if (this->inv[i++] == learn)
			return ;
	this->inv[this->actual++] = learn;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < this->actual)
	{
		if (this->inv[i]->getType() == type)
			return (this->inv[i]->clone());
		i++;
	}
	return (0);
}
