/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:23:24 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 14:22:55 by aglorios         ###   ########.fr       */
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
	try{
		Scalaire Test(argv[1]);
		std::cout << Test;
	}
	catch(std::invalid_argument& e){
		std::cout << "Invalid arg" << std::endl;
		return (0);
	}
 	catch(std::out_of_range& e){
		std::cout << "Out of range" << std::endl;
		return (0);
	}
	return (0);
}
