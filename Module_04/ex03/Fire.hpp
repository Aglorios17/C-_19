/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 16:01:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

class Fire;
# include <iostream>
# include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire(void);
		Fire(const Fire &copy);
		Fire &operator=(const Fire &copy);
		virtual ~Fire(void);
		AMateria* clone(void) const;
		virtual void use(ICharacter& target);
};

#endif
