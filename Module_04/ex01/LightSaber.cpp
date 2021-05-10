/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSaber.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:48:44 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "LightSaber.hpp"

LightSaber::LightSaber(void) : AWeapon("Lightsaber", 10, 70) {}

LightSaber::LightSaber(const LightSaber &copy) : AWeapon(copy) {*this = copy;}

LightSaber & LightSaber::operator=(const LightSaber & copy)
{
	if (this != &copy)
		AWeapon::operator=(copy);
	return (*this);
}

LightSaber::~LightSaber(void) {}

void	LightSaber::attack(void) const
{
	std::cout << "* Pssshhew ! *" << std::endl;
}
