/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 12:25:56 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Wolf.hpp"

int main()
{
	std::cout << "|||||||||||||||||     main test       ||||||||\n" << std::endl;

	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.Polymorph(jim);
	robert.Polymorph(joe);

	std::cout << "\n|||||||||||||||   add test     ||||||||||||| \n" << std::endl;

	Wolf Me("Alessio");
	std::cout << Me;
	robert.Polymorph(Me);
	
	return 0;
}
