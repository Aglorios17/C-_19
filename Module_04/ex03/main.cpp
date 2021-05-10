/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 16:17:40 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	{
		std::cout << "Main test" << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
	
		ICharacter* moi = new Character("moi");
	
		AMateria* tmp;
		tmp = src->createMateria("Ice");
		moi->equip(tmp);
		tmp = src->createMateria("Cure");
		moi->equip(tmp);
	
		ICharacter* bob = new Character("bob");
	
		moi->use(0, *bob);
		moi->use(1, *bob);
	
		std::cout << "\nadd test\n" << std::endl;
		ICharacter* Alessio = new Character("Alessio");
		src->learnMateria(new Fire());
		tmp = src->createMateria("Fire");
		Alessio->equip(tmp);
		moi->equip(tmp);
		ICharacter* Pierre = new Character("Pierre");
		Alessio->use(0, *Pierre);
		moi->use(2, *Pierre);
	
		delete bob;
		delete Pierre;
		delete moi;
		delete Alessio;
		delete src;
	}
	/*
	std::cout << "\nadd test\n" << std::endl;

	IMateriaSource* TT = new MateriaSource();
	TT->learnMateria(new Ice());
	TT->learnMateria(new Cure());
//	TT->learnMateria(new Fire());

	ICharacter* Alessio = new Character("Alessio");

	AMateria* temp;
	temp = TT->createMateria("Ice");
	Alessio->equip(temp);
	temp = TT->createMateria("Cure");
	Alessio->equip(temp);
//	temp = TT->createMateria("Fire");
//	Alessio->equip(temp);

	ICharacter* Pierre = new Character("Pierre");
//	ICharacter* Elias = new Character("Elias");

	Alessio->use(0, *Pierre);
	Alessio->use(1, *Pierre);

	delete Pierre;
//	delete Elias;
	delete Alessio;
	delete TT;
*/
	return 0;
}
