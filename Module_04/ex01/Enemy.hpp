/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
		int			HP;
		std::string type;
	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		[...]
		Enemy(const Enemy &copy);
		~Enemy(void);
		std::string [...] getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif
