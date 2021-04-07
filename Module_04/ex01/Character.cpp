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

# include "Character.hpp"
# include "Enemy.hpp"

Character::Character(void) {}	

Character::Character(std::string const & name)
{
	this->Name = name;
	this->AP = 40;
	this->character = AWeapon;
}
		
Character::Character(const Character &copy)
{
	Name = copy.Name;
	AP = copy.AP;
	character = copy.character;
}

Character::~Character(void) {}

void Character::recoverAP(void) {}

void Character::equip(AWeapon*) {}

void Character::attack(Enemy*) {}

std::string Character::getName(void) const
{
	return (this->Name);
}
