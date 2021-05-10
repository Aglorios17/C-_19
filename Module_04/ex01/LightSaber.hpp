/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LightSaber.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/05/10 14:38:19 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHTSABER_HPP
# define LIGHTSABER_HPP

# include <iostream>
# include "AWeapon.hpp"

class LightSaber : public AWeapon
{
	public:
		LightSaber(void);
		LightSaber(const LightSaber &copy);
		LightSaber &operator=(const LightSaber & copy);
		virtual ~LightSaber(void);
		virtual void attack(void) const;
};

#endif
