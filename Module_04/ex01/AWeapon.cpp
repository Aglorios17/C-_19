/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 15:55:57 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"

AWeapon::AWeapon(void) {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->Name = name;
	this->AP = apcost;
	this->Damage = damage;
}

AWeapon::AWeapon(const AWeapon &copy)
{
	Name = copy.Name;
	AP = copy.AP;
	Damage = copy.Damage;
}

AWeapon & AWeapon::operator=(const AWeapon & copy)
{
	if (this != &copy)
	{
		Name = copy.Name;
		AP = copy.AP;
		Damage = copy.Damage;
	}
	return (*this);
}

AWeapon::~AWeapon() {}

std::string	AWeapon::getName(void) const
{
	return (this->Name);
}

int			AWeapon::getAPCost(void) const
{
	return (this->AP);
}

int 		AWeapon::getDamage(void) const
{
	return (this->Damage);
}

std::ostream &operator<<(std::ostream &o, AWeapon const& rhs)
{
	o << rhs.getName();
	return (o);
}
