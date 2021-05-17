/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 18:32:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(Span const & copy) : n(copy.n)
{
}

Span & Span::operator=(Span const & copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

void Span::addNumber(unsigned int add)
{
	if (lst.size() == add)
		throw (std::exception());
	lst.push_back(add);
	sort(lst.begin(), lst.end());
}

int Span::shortestSpan(void)
{
}

int Span::longestSpan(void)
{
}
