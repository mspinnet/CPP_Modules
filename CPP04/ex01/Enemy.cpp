/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:28:48 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 16:46:25 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return;
}

Enemy::Enemy(int hp, std::string const &type)
{
	this->_type = type;
	this->_hp = hp;
	return;
}

Enemy::Enemy(Enemy const &eny)
{
	*this = eny;
	return;
}

Enemy &Enemy::operator= (Enemy const &eny)
{
	if (this != &eny)
	{
		this->_type = eny._type;
		this->_hp = eny._hp;

	}
	return *this;
}

Enemy::~Enemy(void)
{
	return;
}

std::string const Enemy::getType(void) const
{
	return this->_type;
}

int Enemy::getHP(void) const
{
	return this->_hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	std::cout << "Enemy " << this->_type << " takes " << damage << " points of damage!" << std::endl;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
	return;
}
