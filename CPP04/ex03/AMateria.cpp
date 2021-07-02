/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 10:30:18 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 14:51:49 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
	return;
}

AMateria::AMateria(AMateria const &amat)
{
	std::cout << "Copy constructor AMateria called" << std::endl;
	*this = amat;
	return;
}

AMateria &AMateria::operator= (AMateria const &amat)
{
	std::cout << "Assignation operator AMateria called" << std::endl;
	if (this != &amat)
	{
		this->_type = amat._type;
		this->_xp = amat._xp;
	}
	return *this;
}

AMateria::~AMateria(void)
{
	return;
}

std::string const &AMateria::getType(void) const
{
	return this->_type;
}

unsigned int AMateria::getXP(void) const
{
	return this->_xp;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
	return;
}
