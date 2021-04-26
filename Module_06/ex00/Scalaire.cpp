/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sclalaire.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 18:32:48 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Scalaire.hpp"

Scalaire::Scalaire(void)
{}

Scalaire::Scalaire(std::string value)
{
	this->Value = value;
	Scal_int();
	Scal_double();
	Scal_float();
	Scal_char();
}

Scalaire::Scalaire(const Scalaire &copy)
{
	Value = copy.Value;
}

Scalaire & Scalaire::operator=(const Scalaire &copy)
{
	Value = copy.Value;
	return (*this);
}

Scalaire::~Scalaire(void) {}

void Scalaire::Scal_int(void)
{
	try{	
		this->I = stoi(this->Value);
	}
	catch(std::invalid_argument& e){
		this->I = -1;
	}
 	catch(std::out_of_range& e){
		this->I = -1;
	}
}
void Scalaire::Scal_char(void)
{
	std::string nb;
	if (!isprint(this->Value[0]))
	{
		this->C = -1;
		return ;
	}
	int i = 0;
	while (isdigit(this->Value[i]))
		nb += this->Value[i++];
	if (this->Value[i] != '\0' && this->Value[i] != '.')
	{
		this->C = -2;
		return ;
	}
	this->C = stoi(nb);
}

void Scalaire::Scal_float(void)
{
	try{	
		this->F = stof(this->Value);
	}
	catch(std::invalid_argument& e){
		this->F = -1;
	}
 	catch(std::out_of_range& e){
		this->F = -1;
	}
}

void Scalaire::Scal_double(void)
{
	try{	
		this->D = stod(this->Value);
	}
	catch(std::invalid_argument& e){
		this->D = -1;
	}
 	catch(std::out_of_range& e){
		this->D = -1;
	}
}

std::string Scalaire::get_int(void) const
{
	if (this->I == -1)
		return ("Impossible");
	return(std::to_string(this->I));
}

std::string Scalaire::get_char(void) const
{
	if (isalpha(this->Value[0]))
		return ("Impossible");
	if (!isprint(this->C))
		return ("Non displayable");
	std::string ret;
	ret += "\'";
	ret += this->C;
	ret += "\'";
	return(ret);
}

std::string Scalaire::get_float(void) const
{
	if (this->F == -1)
		return ("Impossible");
	std::string nb = std::to_string(this->F);
	std::string ret;
	int i = 0;
	while (nb[i] && nb[i] != '.')
	{
		ret += nb[i];
		i++;
	}
	if (nb[i] == '.' && nb[i + 1])
	{
		ret += '.';
		ret += nb[i + 1];
	}
	return(ret + "f");
}

std::string Scalaire::get_double(void) const
{
	if (this->D == -1)
		return ("Impossible");
	std::string nb = std::to_string(this->D);
	std::string ret;
	int i = 0;
	while (nb[i] && nb[i] != '.')
	{
		ret += nb[i];
		i++;
	}
	if (nb[i] == '.' && nb[i + 1])
	{
		ret += '.';
		ret += nb[i + 1];
	}
	return(ret);
}

std::ostream &operator<<(std::ostream &o, Scalaire const &scalaire)
{
	o << "char: "; 
	o << scalaire.get_char() << std::endl;
	o << "int: ";
	o << scalaire.get_int() << std::endl;
	o << "float: ";
	o << scalaire.get_float() << std::endl;
	o << "double: ";
	o << scalaire.get_double() << std::endl;

	return (o);
}
