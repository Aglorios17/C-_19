/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

class Character
{
	private:
		int			AP;
		Character	charact;
	public:
		Character(void);
		Character(std::string const & name);
		Character(const Character &copy);
		~Character(void);
		void recoverAP(void);
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string [...] getName(void) const;
};

#endif
