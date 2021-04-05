/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:51 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:53 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cmath>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
/*	
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
*/
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		int		vaulthunter_dot_exe(std::string const & target);
};

#endif
