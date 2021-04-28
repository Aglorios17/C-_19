/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:15:30 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 19:05:00 by aglorios         ###   ########.fr       */
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

void * Serializer::serialize(void) 
{
	int i = 0;
	static char charact[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	Data *raw = new Data;

	while (i++ < 8)
	{
		raw->s1 += charact[rand() % 62];
		raw->s2 += charact[rand() % 62];
	}
	raw->n = rand();
	return (static_cast<void *>(raw));
}

Data * Serializer::deserialize(void * raw) 
{
	return (reinterpret_cast<Data *>(raw));
}

int main ()
{
	srand(time(NULL));
	Serializer Test;
	std::cout << std::endl;
	Serializer Test2;
	return (0);
}
