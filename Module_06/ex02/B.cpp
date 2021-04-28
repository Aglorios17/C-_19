/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:17:41 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 18:26:05 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) {}

B::B(const B &copy) {(void)copy;}

B &	B::operator=(const B &copy)
{
	(void)copy;
	return (*this);
}

B::~B(void) 
{
	std::cout << "B delete" << std::endl;
}
