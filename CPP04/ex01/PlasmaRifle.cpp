/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:51:02 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 13:17:04 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &rifle)
{
	*this = rifle;
	return;
}

PlasmaRifle &PlasmaRifle::operator= (PlasmaRifle const &rifle)
{
	AWeapon::operator=(rifle);
	return *this;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}
