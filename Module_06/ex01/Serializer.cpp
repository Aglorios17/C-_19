/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:15:30 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 16:01:16 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) 
{
	void *raw = serialize();
	std::cout << "raw on heap : " << raw << std::endl;
	Data *data = deserialize(raw);
	std::cout << "cast raw on data : " << data << std::endl;
	std::cout << "s1 : " << data->s1 << std::endl;
	std::cout << "s2 : " << data->s2 << std::endl;
	std::cout << "n : " << data->n << std::endl;
	delete (data);
	return ;
}

Serializer::Serializer(const Serializer &copy) {(void)copy;}

Serializer & Serializer::operator=(const Serializer &copy) 
{
	(void)copy;
	return (*this);
}

Serializer::~Serializer(void) 
{
	std::cout << "free done" << std::endl;
}

std::string Serializer::stringCreate(void)
{
	int i = 0;
	static char str[9];

	while (i < 8)
		str[i++] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 62];
	return (static_cast<std::string>(str));
}

void * Serializer::serialize(void) 
{
	srand(time(NULL));
	Data *raw = new Data;

	raw->s1 = stringCreate(); 
	raw->s2 = stringCreate(); 
	raw->n = rand();
	return (static_cast<void *>(raw));
}

Data * Serializer::deserialize(void * raw) 
{
	return (reinterpret_cast<Data *>(raw));
}

int main ()
{
	Serializer Test;
	return (0);
}
