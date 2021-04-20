/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
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
		int getCount(void) const;
		ISpaceMarine *getUnit(int soldat) const;
		int	push(ISpaceMarine *soldat);
};

#endif
