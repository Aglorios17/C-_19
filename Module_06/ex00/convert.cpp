/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:23:24 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 14:06:33 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalaire.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error arguments" << std::endl;
		return (0);
	}
	Scalaire Test(argv[1]);

	std::cout << Test;
}
