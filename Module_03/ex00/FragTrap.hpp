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

class FragTrap
{
	private:
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
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(FragTrap const &copy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	beRepaired_energy(unsigned int amount);
		unsigned int		vaulthunter_dot_exe(std::string const & target);
		std::string get(void);
		unsigned int		get(std::string attack);
		void	show(void);
};

#endif
