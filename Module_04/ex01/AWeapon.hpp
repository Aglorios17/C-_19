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
		std::string	Sound;
		std::string	Effect;
	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		~AWeapon();
		std::string	[...] getName() const;
		int getAPCost() const;
		int getDamage() const;
		[...]
		void attack() const = 0;
};

#endif
