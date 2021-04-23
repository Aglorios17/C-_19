/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:23:24 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/23 17:38:24 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalaire.hpp"

int main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "Error arguments" << std::endl;
		return (0);
	}

	Scalaire Test("10");

	std::cout << Test;
}
