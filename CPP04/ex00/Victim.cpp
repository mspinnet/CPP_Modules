/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:37:31 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:10:41 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	return;
}

Victim::Victim(std::string _name) : name(_name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
	return;
}

Victim::Victim(Victim const &_victim)
{
	std::cout << "Copy constructor Victim called" << std::endl;
	*this = _victim;
	return;
}

Victim &Victim::operator= (Victim const &_victim)
{
	std::cout << "Assignation operator Victim called" << std::endl;
	if (this != &_victim)
		this->name = _victim.name;
	return *this;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
	return;
}

std::string const	&Victim::getName(void) const
{
	return this->name;
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
	return;
}

std::ostream	&operator<<(std::ostream &o, Victim const &_victim)
{
	o << "I am " << _victim.getName() << " and I like otters!" << std::endl;
	return o;
}