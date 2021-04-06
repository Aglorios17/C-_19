/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string	Name;
		std::string Title;
		Sorcerer(void);
	public:
		Sorcerer(std::string name, std::string Titre);
		Sorcerer(const Sorcerer &copy);
		~Sorcerer(void);
		void Polymorph(Victim const & copy) const;
		void intro(void) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & copy);

#endif 
