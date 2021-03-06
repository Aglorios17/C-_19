/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <aglorios@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:00:34 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/05 00:26:17 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed	a(5);
	Fixed	d(20);
	Fixed	c;
//	Fixed const b(Fixed(5.05f) * Fixed(2));

	c  = a < d;
	std::cout << "< "<< c << std::endl;
	c  = a > d;
	std::cout << "> "<< c << std::endl;
	c  = a <= d;
	std::cout << "<= "<< c << std::endl;
	c  = a >= d;
	std::cout << ">= "<< c << std::endl;
	c  = a != d;
	std::cout << "!= "<< c << std::endl;
	c  = a == d;
	std::cout << "== "<< c << std::endl;
	c  = a + d;
	std::cout << "+ "<< c << std::endl;
	c  = d - a;
	std::cout << "- "<< c << std::endl;
	c  = d / a;
	std::cout << "/ "<< c << std::endl;
	Fixed const z(Fixed(5.05f) * Fixed(2));
	std::cout << "* "<< z << std::endl;
//	std::cout << ++a << std::endl;
//	std::cout << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << a << std::endl;

//	std::cout << b << std::endl;

//	std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
