/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:17:41 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 18:25:43 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) {}

A::A(const A &copy) {(void)copy;}

A &	A::operator=(const A &copy)
{
	(void)copy;
	return (*this);
}

A::~A(void) 
{
	std::cout << "A delete" << std::endl;
}
