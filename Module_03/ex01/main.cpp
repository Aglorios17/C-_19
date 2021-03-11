/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:58 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:55 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	system("clear");
	std::cout << "////////// INIT FRAG TRAP////////" << std::endl;
	FragTrap a("Alessio");
	FragTrap b("Elias");
	std::cout << "///////////////// 1 /////////////" << std::endl;
	a.rangedAttack(b.get());
	b.takeDamage(a.get("Ranged"));
	std::cout << "///////////////// 2 /////////////" << std::endl;
	b.beRepaired(5);
	std::cout << "///////////////// 3 /////////////" << std::endl;
	a.meleeAttack(b.get());
	b.takeDamage(a.get("Melee"));
	std::cout << "///////////////// 4 /////////////" << std::endl;
	b.meleeAttack(b.get());
	a.takeDamage(a.get("Melee"));
	std::cout << "///////////////// 5 /////////////" << std::endl;
	int i = a.vaulthunter_dot_exe(b.get());
	b.takeDamage(i);
	std::cout << "///////////////// 6 /////////////" << std::endl;
	a.meleeAttack(b.get());
	b.takeDamage(a.get("Melee"));
	std::cout << "///////////////// A /////////////" << std::endl;
	a.show();
	std::cout << "///////////////// B /////////////" << std::endl;
	b.show();
//	std::cout << "//////////////// END ////////////" << std::endl;
	std::cout << "\n" << std::endl;
	std::cout << "////////// INIT SCAV TRAP////////" << std::endl;
	ScavTrap c("Alessio");
	ScavTrap d("Elias");
	std::cout << "///////////////// 1 /////////////" << std::endl;
	c.rangedAttack(d.get());
	d.takeDamage(c.get("Ranged"));
	std::cout << "///////////////// 2 /////////////" << std::endl;
	d.beRepaired(5);
	std::cout << "///////////////// 3 /////////////" << std::endl;
	c.meleeAttack(d.get());
	d.takeDamage(c.get("Melee"));
	std::cout << "///////////////// 4 /////////////" << std::endl;
	d.meleeAttack(d.get());
	c.takeDamage(c.get("Melee"));
	std::cout << "///////////////// 5 /////////////" << std::endl;
//	int i = 
	c.challengeNewcomer(d.get());
//	b.takeDamage(i);
	std::cout << "///////////////// 6 /////////////" << std::endl;
	c.meleeAttack(d.get());
	d.takeDamage(c.get("Melee"));
	std::cout << "///////////////// C /////////////" << std::endl;
	c.show();
	std::cout << "///////////////// D /////////////" << std::endl;
	d.show();
	std::cout << "//////////////// END ////////////" << std::endl;
	return (1);
}
