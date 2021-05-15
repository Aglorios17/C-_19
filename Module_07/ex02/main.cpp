/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:40:06 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 15:17:11 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class Awesome 
{
	public:
		Awesome( int n = 0 ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	private:
		int _n;
};

int main()
{
	{
		Array<char> a;

		try{
			std::cout << "Size A: " << a.size() << std::endl;
		}
		catch (const std::exception & e){
			std::cerr << e.what() << std::endl;
		}

		Array<char> b(2);
		b[0] = '1';
		b[1] = '2';
		b[2] = '3';
	
		try{
			std::cout << "Size B: " << b.size() << std::endl;
		}
		catch (const std::exception & e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "|||||| correction test |||||||||" << std::endl;
		Array<Awesome> c;
    	Array<Awesome> d(3);

    	d[0] = Awesome(2);
    	d[1] = Awesome(19);
   		d[2] = Awesome(42);
    	try
    	{
    	    std::cout << "size C: " << c.size() << std::endl; ;
    	    std::cout << "size D: " << d.size() << std::endl;
//    	    d[5] = Awesome(21);
    	}
    	catch(const std::exception& e)
    	{
    	    std::cout << e.what() << '\n';
    	}
	}
	return (0);
}
