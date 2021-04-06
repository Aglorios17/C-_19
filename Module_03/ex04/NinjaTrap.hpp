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

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap(const NinjaTrap &copy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		int		ninjaShoebox(std::string const & target);
};

#endif
