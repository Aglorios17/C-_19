/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <aglorios@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:00:34 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/05 00:26:17 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const Value)
{
	this->value = Value << this->bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const Value)
{
	this->value = roundf(Value * (1 << this->bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.getRawBits();
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation = operator called" << std::endl;
	this->value = rhs.getRawBits();

	return (*this);
}

Fixed Fixed::operator<(Fixed const & rhs) const
{
	std::cout << "Assignation < operator called" << std::endl;
	if (this->value < rhs.getRawBits())
		return Fixed(1);
	else
		return Fixed(0);
}

Fixed Fixed::operator>(Fixed const & rhs) const
{
	std::cout << "Assignation > operator called" << std::endl;
	if (this->value > rhs.getRawBits())
		return Fixed(1);
	else
		return Fixed(0);
}

Fixed Fixed::operator<=(Fixed const & rhs) const
{
	std::cout << "Assignation <= operator called" << std::endl;
	if (this->value <= rhs.getRawBits())
		return Fixed(1);
	else
		return Fixed(0);
}

Fixed Fixed::operator>=(Fixed const & rhs) const
{
	std::cout << "Assignation >= operator called" << std::endl;
	if (this->value >= rhs.getRawBits())
		return Fixed(1);
	else
		return Fixed(0);
}

Fixed Fixed::operator==(Fixed const & rhs) const
{
	std::cout << "Assignation == operator called" << std::endl;
	if (this->value == rhs.getRawBits())
		return Fixed(1);
	else
		return Fixed(0);
}

Fixed Fixed::operator!=(Fixed const & rhs) const
{
	std::cout << "Assignation != operator called" << std::endl;
	if (this->value != rhs.getRawBits())
		return Fixed(1);
	else
		return Fixed(0);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	std::cout << "Assignation + operator called" << std::endl;
	return Fixed((this->value + rhs.getRawBits()) >> this->bits);
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	std::cout << "Assignation - operator called" << std::endl;
	return Fixed((this->value - rhs.getRawBits()) >> this->bits);
}

Fixed Fixed::operator*(Fixed const & rhs) const //////////// probs
{
	std::cout << "Assignation * operator called" << std::endl;
	return Fixed((this->value * rhs.getRawBits()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	std::cout << "Assignation / operator called" << std::endl;
	return Fixed((this->value / rhs.getRawBits()));
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member fonction called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
