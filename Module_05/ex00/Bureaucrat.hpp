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

class Bureaucrat
{
	private:
		std::string const Name;
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
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &copy);
				GradeTooHighException &operator=(const GradeTooHighException &copy);
				virtual ~GradeTooHighException(void);
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooHighException &copy);
				GradeTooLowException &operator=(const GradeTooHighException &copy);
				virtual ~GradeTooLowException(void);
		};
};

std::ostream & operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
