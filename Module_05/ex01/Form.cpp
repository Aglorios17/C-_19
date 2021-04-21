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

Form::Form(void) 
{
	Validate = 0;
	Doc = NULL;
}

Form::~Form(void) {}

Form::Form(std::string form, const Bureaucrat &Agent) 
{
	this->Doc = form;
	int i = beSigned(Agent);
	if (i == 1)
		throw (GradeTooHighException());
	else if (i == -1)
		throw (GradeTooLowException());		
	else
		Bureaucrat::signForm(Form);
}

int	Form::beSigned(const Bureaucrat &agent)
{
	if (agent.getGrade < 2)
		throw (1);
	else if (agent.getGrade > 10)
		return (-1);
	Validate = 1;
	return (0);
}

Form::Form(const Form & copy)
{
	Doc = copy.Doc;
	Validate = copy.Validate;
}

Form & Form::operator=(const Form & copy)
{
	if (this != &copy)
	{
		Doc = copy.Doc;
		Validate = copy.Validate;
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

const char *Form::GradeTooHighException::what(void) const throw()
{
	Bureaucrat::signForm(Form);
	return ("Grade too high for this form!");
}

const char *Form::GradeTooLowException::what(void) const throw()
{

	Bureaucrat::signForm(Form);
	return ("Grade too low for this form !");
}

std::ostream & operator<<(std::ostream &o, const Form &rhs)
{
	o << "Form : "<< rhs.getForm() << ". Validate : " << rhs.getValidate() << std::endl;

	return (o);
}
