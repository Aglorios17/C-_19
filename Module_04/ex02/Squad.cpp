/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglorios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:11:42 by aglorios          #+#    #+#             */
/*   Updated: 2021/03/11 19:23:51 by aglorios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) 
{
	this->Count = 0;
	this->Soldats = NULL;
}

Squad::Squad(const Squad &copy) 
{
	Count = copy.Count;
	Soldats = copy.Soldats;
}

Squad & Squad::operator=(const Squad &copy) 
{
	if (this != &copy)
	{
		Count = copy.Count;
		Soldats = copy.Soldats;
	}
	return (*this);
}

Squad::~Squad(void)
{
	Marine *fri;

	fri = NULL;
	while (this->Soldats)
	{
		fri = this->Soldats->next;
		delete (this->Soldats->value);
		delete (this->Soldats);
		this->Soldats = fri;
	}
}

int Squad::getCount(void) const
{
	return (this->Count);
}

ISpaceMarine *Squad::getUnit(int soldat) const
{
	Marine *list;

	list = NULL;
	if (soldat >= this->Count)
		return (NULL);
	list = Soldats;
	while (soldat-- > 0 && list && list->next)
		list = list->next;
	return (list->value);
}

int	Squad::push(ISpaceMarine *soldat)
{
	Marine *list;

	list = NULL;
	if (!soldat)
		return (Count);
	if (Soldats == NULL)
	{
		Marine *add = new Marine;
		add->value = soldat;
		add->next = NULL;
		Soldats = add;
	}
	else
	{
		list = Soldats;
		while (list->next)
			list = list->next;
		Marine *add = new Marine;
		add->value = soldat;
		add->next = NULL;
		Soldats = add;
	}
	Count += 1;
	return (Count);
}
