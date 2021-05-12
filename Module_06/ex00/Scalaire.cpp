/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sclalaire.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 18:00:33 by aglorios         ###   ########.fr       */
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

Scalaire::~Scalaire(void) {return ;}

void Scalaire::Scal_int(void)
{
	int i;
	try{	
		i = stoi(this->Value);
		this->I = static_cast<int>(i);
	}
	catch(std::invalid_argument& e){
		this->I = -1;
	}
 	catch(std::out_of_range& e){
		this->I = -1;
		return ;
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
	char c;
	c = stoi(nb);
	this->C = static_cast<char>(c);
}

void Scalaire::Scal_float(void)
{
	float f;
	try{	
		f = stof(this->Value);
		this->F = static_cast<float>(f);
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
	double d;
	try{	
		d = stod(this->Value);
		this->D = static_cast<double>(d);
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
	std::string nb;
	if (!isdigit(this->Value[0]) && !this->Value[1])
	{
		int i = static_cast<int>(this->Value[0]);
		if (isalpha(this->Value[0]) && isalpha(this->Value[1]))
			return ("Impossible");
		nb = std::to_string(i);
	}
	else
	{
		if (this->I == -1)
			return ("Impossible");
		nb = std::to_string(this->I);
	}
	return(nb);
}

std::string Scalaire::get_char(void) const
{
	std::string ret;
	if (!isdigit(this->Value[0]))
	{
		char c = static_cast<char>(this->Value[0]);
		if (isalpha(this->Value[0]) && isalpha(this->Value[1]))
			return ("Impossible");
		if (!isprint(c))
			return ("Non displayable");
		ret += "\'";
		ret += c;
		ret += "\'";
	}
	else
	{
		if (isalpha(this->Value[0]))
			return ("Impossible");
		if (!isprint(this->C))
			return ("Non displayable");
		ret += "\'";
		ret += this->C;
		ret += "\'";
	}
	return(ret);
}

std::string Scalaire::get_float(void) const
{
	std::string nb;
	if (!isdigit(this->Value[0]) && !this->Value[1])
	{
		float f = static_cast<float>(this->Value[0]);
		if (isalpha(this->Value[0]) && isalpha(this->Value[1]))
			return ("Impossible");
		nb = std::to_string(f);
	}
	else
	{
		if (this->F == -1)
			return ("Impossible");
		nb = std::to_string(this->F);
	}
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
	std::string nb;
	if (!isdigit(this->Value[0]) && !this->Value[1])
	{
		double d = static_cast<double>(this->Value[0]);
		if (isalpha(this->Value[0]) && isalpha(this->Value[1]))
			return ("Impossible");
		nb = std::to_string(d);
	}
	else
	{
		if (this->D == -1)
			return ("Impossible");
		nb = std::to_string(this->D);
	}
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
