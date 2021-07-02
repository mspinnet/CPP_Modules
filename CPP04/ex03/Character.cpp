/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 12:04:20 by mspinnet          #+#    #+#             */
/*   Updated: 2021/05/01 14:51:47 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->inventory[0] = 0;
	this->inventory[1] = 0;
	this->inventory[2] = 0;
	this->inventory[3] = 0;
	return;
}

Character::Character(Character const &pers)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_name = pers._name;
	for (int i = 0; i < 4; i++)
	{
		if (pers.inventory[i] != 0)
			this->inventory[i] = pers.inventory[i]->clone();
		else
			this->inventory[i] = 0;
	}
	return;
}

Character &Character::operator= (Character const &pers)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &pers)
		return *this;
	this->_name = pers._name;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete this->inventory[i];
	for (int i = 0; i < 4; i++)
	{
		if (pers.inventory[i] != 0)
			this->inventory[i] = pers.inventory[i]->clone();
		else
			this->inventory[i] = 0;
	}
	return *this;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete this->inventory[i];
	return;
}

std::string const &Character::getName(void) const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == 0)
		{
			this->inventory[i] = m;
			return;
		}
	}
	std::cout << "Inventory are full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Error index!" << std::endl;
		return;
	}
	this->inventory[idx] = 0;
	return;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Error index!" << std::endl;
		return;
	}
	if (this->inventory[idx] == 0)
	{
		std::cout << "This slot " << idx << " are empty!" << std::endl;
		return;
	}
	this->inventory[idx]->use(target);
	return;
}
