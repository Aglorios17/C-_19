/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:51 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:53 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <cmath>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		int			Hit_points;
		int			Max_hit_points;
		int			Energy_points;
		int			Max_energy_points;
		int			Level;
		std::string	Name;
		int			Melee_attack_damage;
		int			Ranged_attack_damage;
		int			Armor_damage_reduction;
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	beRepaired_energy(unsigned int amount);
		int		challengeNewcomer(std::string const & target);
		std::string get(void);
		int		get(std::string attack);
		void	show(void);
};

#endif
