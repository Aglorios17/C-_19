/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5) 
{
	this->Target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) : Form(copy) {}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & copy)
{
	Form::operator=(copy);
	Target = copy.Target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getExecLevel() || !getValidate())
	{
		std::cout << executor.getName() << " cant execute " << getForm() << " ";
		throw(GradeTooLowException());
	}
	std::cout << this->Target <<  " has been pardonned by Zafod Beelblebrox." << std::endl;
}
