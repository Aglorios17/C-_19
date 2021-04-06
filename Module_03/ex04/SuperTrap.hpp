/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:51 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:53 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <cmath>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap(const SuperTrap &copy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
};

#endif
