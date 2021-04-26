/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:17:41 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/26 14:25:08 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

class Serializer;

# include <iostream>

class	Serializer
{
	private:
		std::string Value;
	public:
		Serializer(void);
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer(void);
		void * serialize(void);
		Data * deserialize(void * raw);
};

std::ostream &operator<<(std::ostream &o, Serializer const &serializer);

#endif
