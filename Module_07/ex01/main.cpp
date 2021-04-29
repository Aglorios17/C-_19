/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:40:06 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 13:50:05 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "int :" << std::endl;
	int a[] = {1, 2, 3, 4, 5};
	iter(a, 5 , affichage);
	std::cout << "string :" << std::endl;
	std::string b[] = {"1a", "2b", "3c", "4d", "5e"};
	iter(b, 5 , affichage);
	return (0);
}
