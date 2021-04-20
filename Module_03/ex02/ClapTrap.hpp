/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:51 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:53 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class ClapTrap
{
	protected:
		unsigned int			Hit_points;
		unsigned int			Max_hit_points;
		unsigned int			Energy_points;
		unsigned int			Max_energy_points;
		unsigned int			Level;
		std::string	Name;
		unsigned int			Melee_attack_damage;
		unsigned int			Ranged_attack_damage;
		unsigned int			Armor_damage_reduction;
	public:
		ClapTrap(void);
		ClapTrap(int hit, int max_hit, int energy, int max_energy, int level, std::string name, int melee, int ranged, int armor);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(ClapTrap const &copy);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	beRepaired_energy(unsigned int amount);
		std::string get(void);
		unsigned int		get(std::string attack);
		void	show(void);
};

#endif
