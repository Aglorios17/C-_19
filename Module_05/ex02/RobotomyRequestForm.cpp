/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45) 
{
	this->Target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) : Form(copy) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & copy)
{
	Form::operator=(copy);
	Target = copy.Target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getExecLevel() || !getValidate())
	{
		std::cout << executor.getName() << " cant execute " << getForm() << " ";
		throw(GradeTooLowException());
	}
	std::string proba[] = {" has been robotomize successfully.", " hasnt not been robotomize."};
	srand(time(0));
	std::cout << "brrrrrrrrrrrrrrrrrrrrrr " << this->Target <<  proba[rand() % 2] << std::endl;
}
