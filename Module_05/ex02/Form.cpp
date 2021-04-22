/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) {}

Form::~Form(void) {}

Form::Form(std::string form, int acces, int exec) 
{
	this->Doc = form;
	this->Validate = 0;
	if (acces < 1 || exec < 1)
		throw(GradeTooHighException());
	if (acces > 150 || exec > 150)
		throw(GradeTooLowException());
	this->AccesLevel = acces;
	this->ExecLevel = exec;
}

void	Form::beSigned(Bureaucrat &agent)
{
	if (agent.getGrade() > this->AccesLevel)
	{
		std::cout << " cant sign " << Doc << " ";
		throw(GradeTooLowException());
	}
	this->Validate = 1;
}

Form::Form(const Form & copy)
{
	Doc = copy.Doc;
	Validate = copy.Validate;
	AccesLevel = copy.AccesLevel;
	ExecLevel = copy.ExecLevel;
}

Form & Form::operator=(const Form & copy)
{
	if (this != &copy)
	{
		Doc = copy.Doc;
		Validate = copy.Validate;
		AccesLevel = copy.AccesLevel;
		ExecLevel = copy.ExecLevel;
	}
	return (*this);
}

std::string Form::getForm(void) const
{
	return (this->Doc);
}

bool Form::getValidate(void) const
{
	return (this->Validate);
}

int	Form::getAccesLevel(void) const
{
	return (this->AccesLevel);
}

int	Form::getExecLevel(void) const
{
	return (this->ExecLevel);
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high for this form!");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low for this form !");
}

const char *Form::CannotSign::what(void) const throw()
{
	return (" because the grade is invalid for this form.");
}

std::ostream & operator<<(std::ostream &o, const Form &rhs)
{
	o << "Form : "<< rhs.getForm() << ". Validate : " << rhs.getValidate() << ".\nAccesLevel : " << rhs.getAccesLevel() << ". ExecLevel : " << rhs.getExecLevel() << std::endl;

	return (o);
}
