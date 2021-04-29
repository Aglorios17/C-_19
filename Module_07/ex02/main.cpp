/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:40:06 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 15:17:11 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char> a;
	Array<char> b(1);

	b[0] = '1';
	b[1] = '2';
	try{
		std::cout << "Size : " << b.size() << std::endl;
	}
	catch (const std::exception & e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
