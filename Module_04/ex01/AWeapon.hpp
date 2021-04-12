/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
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
		virtual ~AWeapon(void);
		std::string	getName() const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;
};

#endif
