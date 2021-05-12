/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/23 13:49:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : AccesLevel(0), ExecLevel(0) {}

Form::~Form(void) {}

Form::Form(const std::string form, const int acces, const int exec) : Doc(form), AccesLevel(acces), ExecLevel(exec)
{
	this->Validate = 0;
	if (acces < 1 || exec < 1)
		throw(GradeTooHighException());
	if (acces > 150 || exec > 150)
		throw(GradeTooLowException());
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

Form::Form(const Form & copy) : Doc(copy.Doc), AccesLevel(copy.AccesLevel), ExecLevel(copy.ExecLevel)
{
	Validate = copy.Validate;
}

Form & Form::operator=(const Form & copy)
{
	if (this != &copy)
		Validate = copy.Validate;
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

bool	Form::executeF(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getExecLevel() || !getValidate())
	{
		std::cout << executor.getName() << " cant execute " << getForm() << " ";
		throw(GradeTooLowException());
		return (0);
	}
	return (1);
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
