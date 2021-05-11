/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "\nCreate Bureaucrat Alessio, level 19\n" << std::endl;
	try{
		Bureaucrat A("Alessio", 19);
		std::cout << A;
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	std::cout << "\nCreate Bureaucrat Elias, level 0\n" << std::endl;
	try	{
		Bureaucrat B("ELias", 0);
		std::cout << B << std::endl;
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	std::cout << "\nCreate Bureaucrat Mathieu, level 151\n" << std::endl;
	try	{
		Bureaucrat C("Mathieu", 151);
		std::cout << C << std::endl;
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	return (0);
}
