/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:17:41 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 16:02:33 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

class Serializer;

# include <iostream>

typedef struct	Data
{
	std::string	s1;
	std::string	s2;
	int 		n;
}				Data;

class	Serializer
{
	public:
		Serializer(void);
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer(void);
		void * 	serialize(void);
		Data * 	deserialize(void * raw);
		std::string	stringCreate(void);
};

#endif
