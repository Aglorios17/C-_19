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
	std::cout << "////////////// 1 //////////////" << std::endl;
	try{
		Bureaucrat A("Alessio", 19);
		std::cout << A << std::endl;
	
		Form Vacation("Vacation", 19, 19);
		std::cout << Vacation << std::endl;
		A.signForm(Vacation);
		std::cout << Vacation << std::endl;
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	std::cout << "////////////// 2 //////////////" << std::endl;
	try{
		Bureaucrat B("Mathieu", 2);
		std::cout << B << std::endl;
	
		Form Augmentation("Augmentation", 1, 1);
		std::cout << Augmentation << std::endl;
		B.signForm(Augmentation);
		std::cout << Augmentation << std::endl;
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	std::cout << "////////////// 3 //////////////" << std::endl;
	try{
		Bureaucrat C("Elias", 100);
		std::cout << C << std::endl;
	
		Form Hired("Hired", 0, 1);
		std::cout << Hired << std::endl;
		C.signForm(Hired);
		std::cout << Hired << std::endl;
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	return (0);
}
