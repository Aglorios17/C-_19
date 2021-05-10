/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:48:18 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "Wolf.hpp"
#include "LightSaber.hpp"

int main()
{
	std::cout << "START" << std::endl;
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	
	std::cout << "\n Second test \n" << std::endl;
	AWeapon* Saber = new LightSaber();
	Enemy* wolf = new Wolf();

	moi->equip(Saber);
	std::cout << *moi;

	moi->attack(wolf);
	std::cout << *moi;
	moi->attack(wolf);
	std::cout << *moi;

//	delete Saber;
//	delete wolf;
//	delete b;
	delete pf;
	delete pr;
	delete moi;

	return 0;
}
