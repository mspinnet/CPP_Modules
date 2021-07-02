/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:59:53 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 16:39:53 by mspinnet         ###   ########.fr       */
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
	this->_AP = 40;
	this->_weapon = NULL;
	return;
}

Character::Character(Character const &pers)
{
	*this = pers;
	return;
}

Character &Character::operator= (Character const &pers)
{
	if (this != &pers)
	{
		this->_name = pers._name;
		this->_AP = pers._AP;
		this->_weapon = pers._weapon;
	}
	return *this;
}

Character::~Character(void)
{
	return;
}

std::string const Character::getName(void) const
{
	return this->_name;
}

int	 Character::getAP(void) const
{
	return this->_AP;
}

void	Character::recoverAP(void)
{
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
	std::cout << "AP recover on 10 points. Current AP = " << this->_AP << std::endl;
	return;
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
	return;
}

AWeapon	const *Character::getWeapon(void) const
{
	return this->_weapon;
}

void	Character::attack(Enemy *eny)
{
	int	APcost = this->_weapon->getAPCost();

	if (this->_weapon == NULL)
		return;
	if (this->_AP < APcost)
	{
		std::cout << "Out of AP!" << std::endl;
		return;
	}
	std::cout << this->_name << " attacks " << eny->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	this->_AP -= APcost;
	eny->takeDamage(this->_weapon->getDamage());
	int enemy_hp = eny->getHP();
	if (enemy_hp <= 0)
		delete eny;
	return;
}

std::ostream	&operator<<(std::ostream &o, Character const &pers)
{
	if (pers.getWeapon() == NULL)
		o << pers.getName() << " has " << pers.getAP() << " AP and is unarmed" << std::endl;
	else
		o << pers.getName() << " has " << pers.getAP() << " AP and wields a " << pers.getWeapon()->getName() << std::endl;
	return o;
}
