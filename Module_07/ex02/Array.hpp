/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:41:39 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/29 15:17:05 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int N;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &copy);
		Array<T> &operator=(Array const &copy);
		T &operator[](unsigned int const &copy);
		~Array(void);
		unsigned int size(void) const;
};

template <typename T>
Array<T>::Array(void)
{
	this->N = 0;
	this->array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->N = n;
	this->array = new T[n];
}

template <typename T>
Array<T>::Array(Array<T> const &copy)
{
	if (array)
			delete[] array;
		array = new T[copy.N];
		int i = 0;
		while (i  < copy.size())
			array[i] = copy.array[i++];
		N = copy.N;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	if (this != &copy)
	{
		if (array)
			delete[] array;
		array = new T[copy.N];
		int i = 0;
		while (i  < copy.size())
			array[i] = copy.array[i++];
		N = copy.N;
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int const &copy)
{
	if (copy >= N)
		throw (std::exception());
	return (array[copy]);
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->array)
		delete[] array;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->N);
}

#endif
