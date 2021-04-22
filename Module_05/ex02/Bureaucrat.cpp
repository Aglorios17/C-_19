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
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
	else
		this->Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	Name = copy.Name;
	Grade = copy.Grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & copy)
{
	if (this != &copy)
	{
		Name = copy.Name;
		Grade = copy.Grade;
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->Name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->Grade);
}

void Bureaucrat::grade_up(void)
{
	this->Grade -= 1;
}

void Bureaucrat::grade_down(void)
{
	this->Grade += 1;
}

void Bureaucrat::signForm(Form &form)
{
	std::cout << this->Name;
	form.beSigned(*this);
	std::cout << " signs " << form.getForm() << std::endl;
}

void Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.executeF(*this);

		std::cout << this->Name << " executs " << form.getForm() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high !");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low !");
}

const char *Bureaucrat::CannotExec::what(void) const throw()
{
	return ("Grade too low !");
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return (o);
}
