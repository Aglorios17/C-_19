/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:17:08 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	protected:
		std::string Name;
		int			Damage;
		int			AP;
		AWeapon(void);
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		AWeapon &operator=(const AWeapon & copy);
		virtual ~AWeapon(void);
		std::string	getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;
};

std::ostream &operator<<(std::ostream &o, AWeapon const& rhs);

#endif
