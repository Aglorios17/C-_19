/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) 
{
	this->Target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
	Form::operator=(copy);
	Target = copy.Target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getExecLevel() || getValidate())
	{
		std::cout << executor.getName() << " cant execute " << getForm() << " ";
		throw(GradeTooLowException());
	}
	std::string file = this->Target + "_shrubbery";
	std::ofstream infile(file);
	infile << "       /\\       " << std::endl;
	infile << "      /  \\      " << std::endl;
	infile << "     /*   \\     " << std::endl;
	infile << "    /    * \\    " << std::endl;
	infile << "   / *      \\   " << std::endl;
	infile << "  /       *  \\  " << std::endl;
	infile << " /       *    \\ " << std::endl;
	infile << "      | |        " << std::endl;
	infile << "      |O|        " << std::endl;
	infile << "      | |        " << std::endl;
	infile << "|||||||||||||||||" << std::endl;
	infile << "       /\\       " << std::endl;
	infile << "      /  \\      " << std::endl;
	infile << "     /*   \\     " << std::endl;
	infile << "    /    * \\    " << std::endl;
	infile << "   / *      \\   " << std::endl;
	infile << "  /       *  \\  " << std::endl;
	infile << " /       *    \\ " << std::endl;
	infile << "      | |        " << std::endl;
	infile << "      |O|        " << std::endl;
	infile << "      | |        " << std::endl;
	infile.close();
}
