/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/23 11:38:11 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	std::cout << "////////////// 4 //////////////" << std::endl;
	try{
		Bureaucrat D("Evrard", 100);
		std::cout << D << std::endl;
	
		ShrubberyCreationForm Test("test");
		std::cout << Test << std::endl;
		Test.execute(D);
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	std::cout << "////////////// 5 //////////////" << std::endl;
	try{
		Bureaucrat E("Henry", 45);
		std::cout << E << std::endl;
	
		RobotomyRequestForm Terminator("Terminator");
	//	std::cout << Test << std::endl;
		E.signForm(Terminator);
		std::cout << Terminator << std::endl;
		Terminator.execute(E);
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	std::cout << "////////////// 6 //////////////" << std::endl;
	try{
		Bureaucrat F("Garreth", 1);
		std::cout << F << std::endl;
	
		PresidentialPardonForm Home("Home");
	//	std::cout << Test << std::endl;
		F.signForm(Home);
		std::cout << Home << std::endl;
		Home.execute(F);
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	std::cout << "////////////// 7 //////////////" << std::endl;
	try{
		Bureaucrat G("Louis", 10);
		std::cout << G << std::endl;
	
		RobotomyRequestForm IA("IA");
	//	std::cout << Test << std::endl;
		G.signForm(IA);
		std::cout << IA << std::endl;
		G.executeForm(IA);
	}
	catch(std::exception &e){
		std::cerr<< e.what() << std::endl;
	}
	return (0);
}
