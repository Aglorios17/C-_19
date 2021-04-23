/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sclalaire.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/23 17:38:29 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Scalaire.hpp"

char		C;
int			I;
double		D;
float		F;
Scalaire::Scalaire(void)
{}

Scalaire::Scalaire(std::string value)
{
}

Scalaire::Scalaire(const Scalaire &copy)
{

}

Scalaire::Scalaire &operator=(const Scalaire &copy)
{

}

Scalaire::~Scalaire(void) {}

int Scalaire::Scal_int(void)
{

}
char Scalaire::Scal_char(void)
{

}

float Scalaire::Scal_float(void)
{

}

double Scalaire::Scal_double(void)
{

}

int Scalaire::get_int(void) const
{
	return(this->I);
}
char Scalaire::Scal_char(void) const
{
	return(this->C);
}

float Scalaire::Scal_float(void) const
{
	return (this->F);
}

double Scalaire::Scal_double(void) const
{
	return (this->D);
}

std::ostream &operator<<(std::ostream &o, Scalaire const &scalaire)
{
	o << "char: " << scalaire.get_char() << std::endl;
	o << "int: " << scalaire.get_int() << std::endl;
	o << "float: " << scalaire.get_float() << std::endl;
	o << "double: " << scalaire.get_double() << std::endl;

	return (o);
}
