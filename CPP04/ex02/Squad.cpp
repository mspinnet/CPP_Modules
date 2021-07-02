/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:29:30 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/30 17:28:30 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
{
	this->count = 0;
	this->ISM = 0;
	return;
}

Squad::Squad(Squad const &sqd)
{
	std::cout << "Copy constructor called" << std::endl;
	this->count = sqd.count;
	if (sqd.ISM)
	{
		this->ISM = new ISpaceMarine*[sqd.count];
		for (int i = 0; i < sqd.count; i++)
			this->ISM[i] = sqd.ISM[i]->clone();
	}
	else
		this->ISM = 0;
	return;
}

Squad &Squad::operator= (Squad const &sqd)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &sqd)
		return *this;
	delete[] this->ISM;
	this->count = sqd.count;
	if (sqd.ISM)
	{
		this->ISM = new ISpaceMarine*[sqd.count];
		for (int i = 0; i < sqd.count; i++)
			this->ISM[i] = sqd.ISM[i]->clone();
	}
	else
		this->ISM = 0;
	return *this;
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->count; i++)
		delete this->ISM[i];
	delete this->ISM;
	return;
}

int	Squad::getCount(void) const
{
	return this->count;
}

ISpaceMarine *Squad::getUnit(int n) const
{
	return this->ISM[n];
}

int	Squad::push(ISpaceMarine *name)
{
	ISpaceMarine **copy;
	copy = new ISpaceMarine*[this->count + 1];
	for (int i = 0; i < this->count; i++)
		copy[i] = this->ISM[i];
	copy[this->count] = name;
	this->count++;
	delete[] this->ISM;
	this->ISM = copy;
	return this->count;
}
