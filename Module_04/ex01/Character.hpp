/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 13:47:08 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		int			AP;
		std::string	Name;
		AWeapon	*weapon;
		Character(void) {}
	public:
		Character(std::string const & name);
		Character(const Character &copy);
		Character &operator=(const Character & copy);
		virtual ~Character(void);
		void recoverAP(void);
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
		std::string getName(void) const;
		int getAP(void) const;
		AWeapon *getWeapon(void) const;
};

std::ostream &operator<<(std::ostream &out, Character const &charact);

#endif
