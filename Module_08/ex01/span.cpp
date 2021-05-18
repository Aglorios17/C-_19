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
	if (!vec.empty())
		vec.erase(vec.begin(), vec.end());
	size_t i = 0;
	while ( i < copy.vec.size())
		vec.push_back(vec[i++]);
}

Span & Span::operator=(Span const & copy)
{
	if (this != &copy)
	{
		if (!vec.empty())
			vec.erase(vec.begin(), vec.end());
		size_t i = 0;
		while ( i < copy.vec.size())
			vec.push_back(vec[i++]);
	}
	return (*this);
}

void Span::addNumber(unsigned int add)
{
	if (vec.size() == add)
		throw (std::exception());
	vec.push_back(add);
	sort(vec.begin(), vec.end());
}

void Span::addNumber(IT one, IT two)
{
	IT i = one;
	while (i != two)
		addNumber(*i++);
}

int Span::shortestSpan(void)
{
	if (vec.empty() || vec.size() == 1)
		throw std::exception();
	int span_value = *(vec.end() - 1);
	std::vector<int>::iterator it = vec.begin() + 1;
	while ( it != vec.end())
	{
		if (abs(*(it - 1) - *it) < span_value)
			span_value = abs(*(it - 1) - *it);
		it++;
	}
	return (span_value);
}

int Span::longestSpan(void)
{
	if (vec.empty() || vec.size() == 1)
		throw std::exception();
	int r = abs(vec.front() - vec.back());
	return (r);
}

std::vector<int>&	Span::getList()
{
	return (vec);
}
