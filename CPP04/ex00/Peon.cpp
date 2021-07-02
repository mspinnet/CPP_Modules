/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:59:58 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:51:13 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	return;
}

Peon::Peon(std::string _name) : Victim(_name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const &_peon)
{
	std::cout << "Copy constructor Peon called" << std::endl;
	*this = _peon;
	return;
}

Peon &Peon::operator= (Peon const &_peon)
{
	std::cout << "Assignation operator Peon called" << std::endl;
	if (this != &_peon)
		this->name = _peon.name;
	return *this;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

std::string const	&Peon::getName(void) const
{
	return this->name;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
	return;
}
