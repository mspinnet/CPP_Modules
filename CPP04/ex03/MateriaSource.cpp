/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:47:37 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 13:58:14 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->count = 0;
	this->_type = "";
	this->materia = 0;
	return;
}

MateriaSource::MateriaSource(MateriaSource const &MS)
{
	std::cout << "Copy constructor called" << std::endl;
	this->count = MS.count;
	this->_type = MS._type;
	if (MS.materia)
	{
		this->materia = new AMateria*[MS.count];
		for (int i = 0; i < MS.count; i++)
			this->materia[i] = MS.materia[i]->clone();
	}
	else
		this->materia = 0;
	return;
}

MateriaSource &MateriaSource::operator= (MateriaSource const &MS)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &MS)
		return *this;
	delete[] this->materia;
	this->count = MS.count;
	this->_type = MS._type;
	if (MS.materia)
	{
		this->materia = new AMateria*[MS.count];
		for (int i = 0; i < MS.count; i++)
			this->materia[i] = MS.materia[i]->clone();
	}
	else
		this->materia = 0;
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->count; i++)
		delete this->materia[i];
	delete[] this->materia;
	return;
}

void MateriaSource::learnMateria(AMateria *m)
{
	AMateria **copy;
	copy = new AMateria*[this->count + 1];
	for (int i = 0; i < this->count; i++)
		copy[i] = this->materia[i];
	copy[this->count] = m;
	this->count++;
	delete[] this->materia;
	this->materia = copy;
	return;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->materia[i]->getType() == type)
			return this->materia[i]->clone();
	}
	return 0;
}
