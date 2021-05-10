/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 13:34:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

typedef struct		Marine
{
	ISpaceMarine	*value;
	struct Marine	*next;
}					Marine;

class Squad : public ISquad
{
	private:
		int Count;
		Marine *Soldats;
	public:
		Squad(void);
		Squad(const Squad &copy);
		Squad &operator=(const Squad &copy);
		virtual ~Squad(void);
		virtual int getCount(void) const;
		virtual ISpaceMarine *getUnit(int soldat) const;
		virtual int	push(ISpaceMarine *soldat);
		void deepCopy(const Squad &copy);
};

#endif
