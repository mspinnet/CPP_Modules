/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyWeapon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:51:02 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 16:44:14 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyWeapon.hpp"

MyWeapon::MyWeapon(void) : AWeapon("MyWeapon", 15, 30)
{
	return;
}

MyWeapon::MyWeapon(MyWeapon const &MW)
{
	*this = MW;
	return;
}

MyWeapon &MyWeapon::operator= (MyWeapon const &MW)
{
	AWeapon::operator=(MW);
	return *this;
}

MyWeapon::~MyWeapon(void)
{
	return;
}

void MyWeapon::attack(void) const
{
	std::cout << "* BAM BAM *" << std::endl;
	return;
}
