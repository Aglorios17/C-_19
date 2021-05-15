/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:55:40 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 12:15:37 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
	public:
		Awesome( int n) : _n( n ) {}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	private:
		int _n;
};

int main( void ) 
{
	{
		int a = 2;
		int b = 3;
	
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
		std::string c = "chaine1";
		std::string d = "chaine2";
	
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << "|||||||||||||| complexe test |||||||||||||" << std::endl;
		std::cout << "C = 10" << std::endl;
		std::cout << "D = 5" << std::endl;
		Awesome c(10);
		Awesome d(5);

		std::cout << "C plus grand ? (before swap): " << (c > d) << std::endl;
		::swap(c, d);
		std::cout << "C plus grand ? (after swap): " << (c > d) << std::endl;
	}
	return 0;
}
