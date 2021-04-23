/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/23 14:21:52 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
class Intern;
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern : public Form
{
	public:
		Intern(void);
		Intern(const Intern & copy);
		Intern & operator=(const Intern & copy);
		~Intern(void);
		Form *makeForm(std::string Name, std::string Target);
		class CannotCreate : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

#endif
