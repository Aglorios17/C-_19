/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"
# include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8) {}

PowerFist::PowerFist(const PowerFist &copy) : AWeapon(copy) {}

PowerFist & PowerFist::operator=(const PowerFist & copy)
{
	if (this != &copy)
		AWeapon::operator=(copy);
	return (*this);
}

PowerFist::~PowerFist(void) {}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
