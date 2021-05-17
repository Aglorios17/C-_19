/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:02:50 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 18:32:46 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stdexcept>
# include <list>
# include <vector>

template<typename T>
void easyfind(T& containers, int n)
{
	typename T::const_iterator it;

	it = std::find(containers.begin(), containers.end(), n);
	if (it != containers.end())
		std::cout << "Value found." << std::endl;
	else
		throw std::exception();
}


#endif
