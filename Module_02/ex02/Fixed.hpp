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
# include <cmath>

class Fixed
{
	private:
		int		value;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed(void);
		Fixed(const Fixed &copy);
		Fixed & operator=(Fixed const & rhs );
		Fixed operator>(Fixed const & rhs ) const;
		Fixed operator<(Fixed const & rhs ) const;
		Fixed operator>=(Fixed const & rhs ) const;
		Fixed operator<=(Fixed const & rhs ) const;
		Fixed operator==(Fixed const & rhs ) const;
		Fixed operator!=(Fixed const & rhs ) const;
		Fixed operator+(Fixed const & rhs ) const;
		Fixed operator-(Fixed const & rhs ) const;
		Fixed operator*(Fixed const & rhs ) const;
		Fixed operator/(Fixed const & rhs ) const;
		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed & min(Fixed & rhs, Fixed & nbr);
		static Fixed & max(Fixed & rhs, Fixed & nbr);
		static const Fixed & min(Fixed const & rhs, Fixed const & nbr);
		static const Fixed & max(Fixed const & rhs, Fixed const & nbr);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int	toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
//Fixed::Fixed & min(Fixed const & rhs, Fixed const & nbr);
//Fixed::Fixed & max(Fixed const & rhs, Fixed const & nbr);

#endif
