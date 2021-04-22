/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdexcept>
# include <fstream>
class RobotomyRequestForm;
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string Target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & copy);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & copy);
		virtual ~RobotomyRequestForm(void);
		void	execute(Bureaucrat const & executor) const;
};

#endif
