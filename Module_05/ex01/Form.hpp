/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string Doc;
		bool		Validate;
	public:
		Form(void);
		Form(std::string Doc, const Bureaucrat &Agent);
		Form(const Form & copy);
		Form & operator=(const Form & copy);
		~Form(void);
		bool	getValidate(void) const;
		std::string getForm(void) const;
		int	beSigned(const Bureaucrat &Agent);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

std::ostream & operator<<(std::ostream &o, const Form &rhs);

#endif
