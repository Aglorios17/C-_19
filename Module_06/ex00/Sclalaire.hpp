/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sclalaire.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/23 17:38:26 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAIRE_HPP
# define SCALAIRE_HPP

class	Scalaire;
# include <iostream>

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
		int Scal_int(void);
		char Scal_char(void);
		float Scal_float(void);
		double Scal_double(void);
		int get_int(void);
		char get_char(void);
		float get_float(void);
		double get_double(void);	
}

std::ostream &operator<<(std::ostream &o, Scalaire const &scalaire);

#endif
