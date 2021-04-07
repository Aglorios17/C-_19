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

PowerFist::PowerFist(void) {}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{}

PowerFist::PowerFist(const PowerFist &copy) AWeapon(copy) {}

PowerFist::~PowerFist(void) AWeapon(copy) {}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
