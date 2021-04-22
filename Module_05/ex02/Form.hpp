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
class Form;
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string Doc;
		int			AccesLevel;
		int			ExecLevel;
		bool		Validate;
	public:
		Form(void);
		Form(std::string Doc, int acces, int exec);
		Form(const Form & copy);
		Form & operator=(const Form & copy);
		~Form(void);
		bool	getValidate(void) const;
		std::string getForm(void) const;
		int		getAccesLevel(void) const;
		int		getExecLevel(void) const;
		void	beSigned(Bureaucrat &Agent);
		bool	executeF(Bureaucrat const &executor) const;
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
		class CannotSign : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

std::ostream & operator<<(std::ostream &o, const Form &rhs);

#endif
