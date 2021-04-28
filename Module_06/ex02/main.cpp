/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:17:27 by aglorios          #+#    #+#             */
/*   Updated: 2021/04/28 18:45:11 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;
	if (i == 1)
	{
		Base *base = new A();
		std::cout << "Class A create" << std::endl;
		return (base);
	}
	else if (i == 2)
	{
		Base *base = new B();
		std::cout << "Class B create" << std::endl;
		return (base);
	}
	else
	{
		Base *base = new C();
		std::cout << "Class C create" << std::endl;
		return (base);
	}
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A : pointer" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B : pointer" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C : pointer" << std::endl;
	else
		std::cout << "no pointer" << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		A &base = dynamic_cast<A&>(p);	
		std::cout << "A : reference" << std::endl;
		(void)base;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Cast impossible A" << std::endl;
	}
	try
	{
		B &base = dynamic_cast<B&>(p);	
		std::cout << "B : reference" << std::endl;
		(void)base;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Cast impossible B" << std::endl;
	}
	try
	{
		C &base = dynamic_cast<C&>(p);	
		std::cout << "C : reference" << std::endl;
		(void)base;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Cast impossible C" << std::endl;
	}
}

int main()
{
	Base *test = generate();

	identify_from_pointer(test);
	identify_from_reference(*test);
	delete test;
	return (0);
}
