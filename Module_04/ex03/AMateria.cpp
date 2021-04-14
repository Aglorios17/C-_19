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

AMateria::AMateria(std::string const & type) {}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType(void) const {}//Returns the materia type

unsigned int AMateria::getXP(void) const {}//Returns the Materia's XP

virtual AMateria* AMateria::clone(void) const = 0 {}

virtual void AMateria::use(ICharacter& target) {}
