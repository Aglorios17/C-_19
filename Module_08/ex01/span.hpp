/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 18:32:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stdexcept>
# include <list>
# include <vector>

class Span
{
	private:
		int n;
		std::vector<int> lst;
	public:
		Span(void) {}
		Span(unsigned int N) : n(N) {}
		Span(Span const & copy);
		Span &operator=(Span const & copy);
		~Span(void) {}
		void addNumber(unsigned int add);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif
