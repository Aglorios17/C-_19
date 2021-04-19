/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(std::string name, int grade) 
{
	this->Name = name;
	try 
	{
		if (grade < 1)
			throw (grade)
		else if (grade > 150)
			throw (grade)
		else
			this->Grade = grade;
	}
	catch (int num > 150)
		Bureaucrat::GradeTooLowException;
	catch (int num < 1)
		Bureaucrat::GradeTooHighException;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	Name = copy.Name;
	Grade = copy.Grade;
}

std::string Bureaucrat::getName(void)
{
	return (this->Name);
}

int Bureaucrat::getGrade(void)
{
	return (this->Grade);
}

void Bureaucrat::grade_up(void)
{
	this->grade -= 1;
}

void Bureaucrat::grade_down(void)
{
	this->grade += 1;
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return (o);
}
