/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalaire.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 18:32:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAIRE_HPP
# define SCALAIRE_HPP

class	Scalaire;
# include <iostream>
# include <string>

class	Scalaire
{
	private:
		std::string Value;
		char		C;
		int			I;
		double		D;
		float		F;
	public:
		Scalaire(void);
		Scalaire(std::string value);
		Scalaire(const Scalaire &copy);
		Scalaire &operator=(const Scalaire &copy);
		~Scalaire(void);
		void Scal_int(void);
		void Scal_char(void);
		void Scal_float(void);
		void Scal_double(void);
		std::string get_int(void) const;
		std::string get_char(void) const;
		std::string get_float(void) const;
		std::string get_double(void) const;	
};

std::ostream &operator<<(std::ostream &o, Scalaire const &scalaire);

#endif
