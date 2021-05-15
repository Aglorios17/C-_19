/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:40:06 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 13:50:05 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main()
{
	{
		std::cout << "int :" << std::endl;
		int a[] = {1, 2, 3, 4, 5};
		iter(a, 5 , affichage);
		std::cout << "string :" << std::endl;
		std::string b[] = {"1a", "2b", "3c", "4d", "5e"};
		iter(b, 5 , affichage);
	}
	{
		std::cout << "|||||||||||| CORRECTION TEST |||||||||||||" << std::endl;
    	int tab[] = { 0, 1, 2, 3, 4 };  // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
    	Awesome tab2[5];

		iter( tab, 5, print<int> );
		iter( tab2, 5, print<Awesome> );
  	}
  	return (0);
}
