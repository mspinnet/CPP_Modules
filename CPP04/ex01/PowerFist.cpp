/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspinnet <mspinnet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:17:12 by mspinnet          #+#    #+#             */
/*   Updated: 2021/04/29 13:19:50 by mspinnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return;
}

PowerFist::PowerFist(PowerFist const &fist)
{
	*this = fist;
	return;
}

PowerFist &PowerFist::operator= (PowerFist const &fist)
{
	AWeapon::operator=(fist);
	return *this;
}

PowerFist::~PowerFist(void)
{
	return;
}

void PowerFist::attack(void) const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
	return;
}
