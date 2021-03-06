/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <aglorios@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:00:34 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/05 00:26:17 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int		value;
		static const int bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &copy);
		Fixed & operator=(Fixed const & rhs );
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
