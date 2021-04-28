/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:17:41 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 19:05:03 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void) {}

C::C(const C &copy) {(void)copy;}

C &	C::operator=(const C &copy)
{
	(void)copy;
	return (*this);
}

C::~C(void) 
{
	std::cout << "C delete" << std::endl;
}
