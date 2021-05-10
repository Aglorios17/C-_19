/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:41:53 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	this->HP = hp;
	this->Type = type;
}

Enemy::Enemy(const Enemy &copy)
{
	HP = copy.HP;
	Type = copy.Type;
}

Enemy & Enemy::operator=(const Enemy & copy)
{
	if (this != &copy)
	{
		HP = copy.HP;
		Type = copy.Type;
	}
	return (*this);
}

Enemy::~Enemy(void) {}

std::string Enemy::getType(void) const
{
	return (this->Type);
}

int Enemy::getHP() const
{
	return (this->HP);
}

void Enemy::takeDamage(int damage)
{
	if (this->HP >= damage)
		this->HP -= damage;
	else
		this->HP = 0;
}

std::ostream &operator<<(std::ostream &o, Enemy const& rhs)
{
	o << rhs.getType() << " has " << rhs.getHP() << " hp";
	return (o);
}
