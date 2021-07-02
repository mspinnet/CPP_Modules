/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyEnemy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:36:29 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 17:46:18 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyEnemy.hpp"

MyEnemy::MyEnemy(void) : Enemy(90, "MyEnemy")
{
	std::cout << "* Clack Clack Clack *" << std::endl;
	return;
}

MyEnemy::MyEnemy(MyEnemy const &RS)
{
	*this = RS;
	return;
}

MyEnemy &MyEnemy::operator= (MyEnemy const &RS)
{
	Enemy::operator=(RS);
	return *this;
}

MyEnemy::~MyEnemy(void)
{
	std::cout << "* Oh i died! *" << std::endl;
	return;
}
