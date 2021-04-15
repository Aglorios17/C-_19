/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		unsigned int	_xp;
		std::string		Type;
	public:
		AMateria(void);
		AMateria(const AMateria & copy);
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		std::string const & getType(void) const; //Returns the materia type
		unsigned int getXP(void) const; //Returns the Materia's XP
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif
