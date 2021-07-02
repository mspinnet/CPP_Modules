/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:09:01 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 11:26:14 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return;
}

Ice::Ice(Ice const &_ice)
{
	std::cout << "Copy constructor Ice called" << std::endl;
	*this = _ice;
	return;
}

Ice &Ice::operator= (Ice const &_ice)
{
	std::cout << "Assignation operator Ice called" << std::endl;
	if (this != &_ice)
		AMateria::operator=(_ice);
	return *this;
}

Ice::~Ice(void)
{
	return;
}

AMateria *Ice::clone(void) const
{
	AMateria *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
	std::cout << "XP = " << AMateria::getXP() << std::endl;
	return;
}
