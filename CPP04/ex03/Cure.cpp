/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 11:22:22 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 11:26:17 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return;
}

Cure::Cure(Cure const &_cure)
{
	std::cout << "Copy constructor Cure called" << std::endl;
	*this = _cure;
	return;
}

Cure &Cure::operator= (Cure const &_cure)
{
	std::cout << "Assignation operator Cure called" << std::endl;
	if (this != &_cure)
		AMateria::operator=(_cure);
	return *this;
}

Cure::~Cure(void)
{
	return;
}

AMateria *Cure::clone(void) const
{
	AMateria *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
	std::cout << "XP = " << AMateria::getXP() << std::endl;
	return;
}
