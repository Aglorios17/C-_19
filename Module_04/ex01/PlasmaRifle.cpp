/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"
# include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) {}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) AWeapon(copy) {}

PlasmaRifle::~PlasmaRifle(void) AWeapon(copy) {}

void	PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
