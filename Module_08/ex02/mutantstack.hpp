/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 18:32:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <iostream>
# include <string>
# include <stdexcept>
# include <algorithm>
# include <vector>
# include <iterator>
# include <list>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack const& copy) : std::stack<T>(copy) {};
		virtual ~MutantStack() {};
		MutantStack& operator=(MutantStack const& copy)
		{
			if (this != &copy)
				this->c = copy.c;
			return *this;
		};
		typedef typename std::stack<T>::container_type::iterator 	iterator;
		iterator begin()
		{
			return this->c.begin();
		};
		iterator end()
		{
			return this->c.end();
		};

	private:

};

#endif
