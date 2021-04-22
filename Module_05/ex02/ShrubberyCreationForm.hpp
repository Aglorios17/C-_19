/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <stdexcept>
# include <fstream>
class ShrubberyCreationForm;
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string Target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & copy);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & copy);
		virtual ~ShrubberyCreationForm(void);
		void	execute(Bureaucrat const & executor) const;
};

#endif
