/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wolf.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:43:33 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Wolf.hpp"

Wolf::Wolf(void) : Enemy(100, "Wolf") 
{
	std::cout << "* RRRRRRRRHHHH rrrrrrrrrhhhh RRRRRHHH *" << std::endl;
}

Wolf::Wolf(const Wolf &copy) : Enemy(copy) 
{
	std::cout << "* RRRRRRRRHHHH rrrrrrrrrhhhh RRRRRHHH *" << std::endl;
	*this = copy;
}

Wolf & Wolf::operator=(const Wolf & copy)
{
	if (this != &copy)
		Enemy::operator=(copy);
	return (*this);
}

Wolf::~Wolf(void) 
{
	std::cout << "* AHHHHOOOUuuu *" << std::endl;
}
