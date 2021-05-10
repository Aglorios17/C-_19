/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:13:30 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
		int			HP;
		std::string Type;
	public:
		Enemy(void) {}
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy &copy);
		Enemy &operator=(const Enemy & copy);
		virtual ~Enemy(void);
		std::string getType(void) const;
		int getHP(void) const;
		virtual void takeDamage(int damage);
};

std::ostream &operator<<(std::ostream &o, Enemy const& rhs);

#endif
