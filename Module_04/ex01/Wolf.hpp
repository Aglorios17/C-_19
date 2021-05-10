/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wolf.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:34:09 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_HPP
# define WOLF_HPP

# include <iostream>
# include "Enemy.hpp"

class Wolf : public Enemy
{
	public:
		Wolf(void);
		Wolf(std::string const & type, int hp);
		Wolf(const Wolf &copy);
		Wolf &operator=(const Wolf & copy);
		virtual ~Wolf(void);
};

#endif
