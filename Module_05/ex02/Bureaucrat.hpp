/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
class	Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	private:
		std::string Name;
		int			Grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & copy);
		Bureaucrat & operator=(const Bureaucrat & copy);
		~Bureaucrat(void);
		int	getGrade(void) const;
		std::string getName(void) const;
		void grade_up(void);
		void grade_down(void);
		void signForm(Form &form);
		void executeForm(Form const & form);
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
		class CannotExec : public std::exception
		{
			public:
				virtual const char *what(void) const throw();
		};
};

std::ostream & operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
