/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 15:56:09 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "Enemy.hpp"

Character::Character(std::string const & name)
{
	this->Name = name;
	this->AP = 40;
	this->weapon = NULL;
	return ;
}
		
Character::Character(const Character &copy)
{
	Name = copy.Name;
	AP = copy.AP;
	weapon = copy.weapon;
	return ;
}

Character & Character::operator=(const Character & copy)
{
	if (this != &copy)
	{
		Name = copy.Name;
		AP = copy.AP;
		weapon = copy.weapon;
	}
	return (*this);
}

Character::~Character(void) 
{
	delete weapon;
	weapon = 0;
}

void Character::recoverAP(void)
{
	if (this->AP + 10 < 40)
		this->AP += 10;
}

void Character::equip(AWeapon *weapon) 
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy) 
{
	if (!enemy || !this->weapon)
		return ;
	if (this->AP < this->weapon->getAPCost())
		return ;
	this->AP -= this->weapon->getAPCost();
	std::cout << this->Name << " attacks " << enemy->getType()
			<< " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
	return ;
}

std::string Character::getName(void) const
{
	return (this->Name);
}

int Character::getAP(void) const
{
	return (this->AP);
}

AWeapon *Character::getWeapon(void) const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, Character const &charact)
{
	out << charact.getName() << " has " << charact.getAP() << " AP and ";
	if (charact.getWeapon())
		out << "wields a " << charact.getWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}
