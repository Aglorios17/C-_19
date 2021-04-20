/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	protected:
		std::string Name;
		Victim(void);
	public:
		Victim(std::string Name);
		Victim(const Victim &copy);
		Victim &operator=(const Victim & copy);
		virtual ~Victim(void);
		virtual void getPolymorphed(void) const;
		void intro(void) const;
};

std::ostream & operator<<(std::ostream & o, Victim const & copy);

#endif
