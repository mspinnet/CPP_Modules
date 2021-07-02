/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 18:41:57 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/26 15:35:55 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return;
}

Sorcerer::Sorcerer(std::string _name, std::string _title) : name(_name), title(_title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const &_sorcerer)
{
	std::cout << "Copy constructor Sorcerer called" << std::endl;
	*this = _sorcerer;
	return;
}

Sorcerer &Sorcerer::operator= (Sorcerer const &_sorcerer)
{
	std::cout << "Assignation operator Sorcerer called" << std::endl;
	if (this != &_sorcerer)
	{
		this->name = _sorcerer.name;
		this->name = _sorcerer.title;
	}
	return *this;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

std::string const	&Sorcerer::getName(void) const
{
	return this->name;
}

std::string const	&Sorcerer::getTitle(void) const
{
	return this->title;
}

void	Sorcerer::polymorph(Victim const &_victim) const
{
	_victim.getPolymorphed();
	return;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &_sorcerer)
{
	o << "I am " << _sorcerer.getName() << ", " << _sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}
