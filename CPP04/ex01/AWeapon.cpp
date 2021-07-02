/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:15:00 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 12:59:35 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
	return;
}

AWeapon::AWeapon(AWeapon const &weapon)
{
	*this = weapon;
	return;
}

AWeapon &AWeapon::operator= (AWeapon const &weapon)
{
	if (this != &weapon)
	{
		this->_name = weapon._name;
		this->_apcost = weapon._apcost;
		this->_damage = weapon._damage;
	}
	return *this;
}

AWeapon::~AWeapon(void)
{
	return;
}

std::string const AWeapon::getName(void) const
{
	return this->_name;
}

int AWeapon::getDamage(void) const
{
	return this->_damage;
}

int AWeapon::getAPCost(void) const
{
	return this->_apcost;
}
