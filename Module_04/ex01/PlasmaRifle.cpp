/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:07:15 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy) {*this = copy;}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle & copy)
{
	if (this != &copy)
		AWeapon::operator=(copy);
	return (*this);
}

PlasmaRifle::~PlasmaRifle(void) {}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
