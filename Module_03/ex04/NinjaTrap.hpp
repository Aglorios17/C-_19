/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:51 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:53 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <cmath>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(const NinjaTrap &copy);
		NinjaTrap &operator=(NinjaTrap const &copy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	ninjaShoebox(ClapTrap const & target);
		void	ninjaShoebox(ScavTrap const & target);
		void	ninjaShoebox(FragTrap const & target);
		void	ninjaShoebox(NinjaTrap const & target);
};

#endif
