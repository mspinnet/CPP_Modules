/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon_two.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:38:21 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:54:44 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon_two.hpp"

Peon_two::Peon_two(void)
{
	return;
}

Peon_two::Peon_two(std::string _name) : Victim(_name)
{
	std::cout << "Сlack clack." << std::endl;
	return;
}

Peon_two::Peon_two(Peon_two const &_peon_two)
{
	std::cout << "Copy constructor Peon_two called" << std::endl;
	*this = _peon_two;
	return;
}

Peon_two &Peon_two::operator= (Peon_two const &_peon_two)
{
	std::cout << "Assignation operator Peon_two called" << std::endl;
	if (this != &_peon_two)
		this->name = _peon_two.name;
	return *this;
}

Peon_two::~Peon_two(void)
{
	std::cout << this->name << " uhh i died!" << std::endl;
	return;
}

std::string const	&Peon_two::getName(void) const
{
	return this->name;
}

void	Peon_two::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a little girl!" << std::endl;
	return;
}