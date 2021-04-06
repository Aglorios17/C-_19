/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wolf.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_HPP
# define WOLF_HPP

# include <iostream>
# include "Victim.hpp"

class Wolf : public Victim
{
	public:
		Wolf(void);
		Wolf(std::string name);
		Wolf(const Wolf &copy);
		virtual ~Wolf(void);
		virtual void getPolymorphed(void) const;
};

#endif
